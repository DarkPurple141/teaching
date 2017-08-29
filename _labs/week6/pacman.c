// Draw a 3x3 simple pacman image

// Remember to pipe the output of this program into a file
// $ ./pacman > pacman.bmp
// $ eog pacman.bmp &

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 32 // change at your leisure

// For writing BMP
#define PIXEL_START 26
#define PIXEL_BYTES 3
#define PIXEL_ALIGN 4
#define PIXEL_BITS  24
#define HEADER_SIZE 12

typedef unsigned char color;

typedef struct _pixel {
    color red;
    color green;
    color blue;
} pixel;

typedef struct _pixel* Pixel;

void setPixel(Pixel p, color red, color green, color blue);
void writePixel(int fp, pixel p);
void draw(pixel pixels[SIZE][SIZE]);

// Write an image to output
void writeImage(int output, pixel pixels[SIZE][SIZE]);

int main(int argc, char *argv[]) {
    // Pixel 2-dimensional array
    // remember, it's pixels[y][x]
    pixel pixels[SIZE][SIZE];

    draw(pixels);

    // Write the image to output
    writeImage(STDOUT_FILENO, pixels);

    return EXIT_SUCCESS;
}

void setPixel(Pixel p, color red, color green, color blue) {
    // set colour
    p->red   = red;
    p->green = green;
    p->blue  = blue;
}

// Draws a SIZExSIZE image of pacman
void draw(pixel pixels[SIZE][SIZE]) {
    int i,j;
    i = 0;
    while (i < SIZE) {
        j = 0;
        while (j < SIZE) {
            if ((i-SIZE/2)*(i-SIZE/2) + (j-SIZE/2)*(j-SIZE/2) <= SIZE/2*SIZE/2) {
              setPixel(&pixels[i][j], i*j%255, i*SIZE%255, i*j%255);
            } else {
              setPixel(&pixels[i][j], 255, 0, 0);
            }
            j++;
        }
        i++;
    }
}

void writePixel(int file, pixel p) {
    write(file, &(p.blue), sizeof(p.blue));
    write(file, &(p.green), sizeof(p.green));
    write(file, &(p.red), sizeof(p.red));
}

// Writes the pixels as a BMP file using the specification from
// https://en.wikipedia.org/wiki/BMP_file_format
void writeImage(int output, pixel pixels[SIZE][SIZE]) {
    // Initial BM bytes
    write(output, "BM", 2);

    // File size
    int rowSize = SIZE * PIXEL_BYTES;
    int rowPadding = 0;
    if (rowSize % PIXEL_ALIGN != 0) {
        // Padd pixel to align properly
        rowPadding = PIXEL_ALIGN - (rowSize % PIXEL_ALIGN);
        rowSize += rowPadding;
    }

    int fileSize = PIXEL_START + (rowSize * SIZE);
    write(output, (char *)&fileSize, sizeof(fileSize));

    // 4 reserved bytes
    write(output, "\0\0\0\0", 4);

    // start of pixel data
    // pixels start immediately after header
    int pixelStart = PIXEL_START;
    write(output, (char *)&pixelStart, sizeof(pixelStart));

    // Size of header
    int headerSize = HEADER_SIZE;
    write(output, (char *)&headerSize, sizeof(headerSize));

    // Image width and height
    short size = SIZE;
    write(output, (char *)&size, sizeof(size));
    write(output, (char *)&size, sizeof(size));

    // Number of image planes (1)
    short planes = 1;
    write(output, (char *)&planes, sizeof(planes));

    // Number of bits per pixel (24)
    short bitsPerPixel = PIXEL_BITS;
    write(output, (char *)&bitsPerPixel, sizeof(bitsPerPixel));

    // Write each of the pixels
    int padding = 0x01234567;
    int y = 0;
    pixel pixel;
    while (y < SIZE) {
        int x = 0;
        while (x < SIZE) {
            // Write the blue, green, then red pixels
            writePixel(output, pixels[y][x]);
            x++;
        }
        // Write the row padding bytes
        write(output, (char *)&padding, rowPadding);
        y++;
    }
}
