---
layout: code
---

An example of a code review cleanup. All code originally from UNSW.

### Before:
```c
int test2( double px, double py, double m, double b )
{   if( py < m * px + b ) {
        return -1; // point is under line
           }else if ( py == m * px + b ){
           return 0;
           } else {
           return 1; // over
        }
}
```

### After:
```c
// This takes in two points and asses whether they are above or below a line
// px is the x-corodiate.
// py is the y-coordinate
// gradient is the gradient of the line
// intercept is the y-intercept of the line
// returns 0 if on line, else -1 if under, and 1 if above.
int lineTest( double px, double py, double gradient, double intercept)
{
  if (py < gradient * px + intercept) {
    return -1; // point is under line
  } else if ( py == gradient * px + intercept ){
    return 0;
  } else {
    return 1; // over
  }
}
```
