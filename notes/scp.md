# Things to know (scp)

###So apparently you guys need to submit your lab work individually.

This doesn't mean you can't use the same file. So to pass the file to your partner do something like this. NB. scp stands for secure copy. We use to to transfer files via the command line.

```bash
$ scp [theFile] z[theirstudentid]@cse.unsw.edu.au:

// example

$ scp myProgram.c z5555555@cse.unsw.edu.au:

```

You will be asked for their password, not yours. This authenticates you, to copy into their account.

### Copying a directory rather than a file

```bash
$ scp -r [theFolder] z[theirstudentid]@cse.unsw.edu.au:

// example

$ scp -r lab2 z5555555@cse.unsw.edu.au:

Again password will be asked.
```

### Further -- copying into a specific folder

```bash
$ scp -r [theFolder] z[theirstudentid]@cse.unsw.edu.au:[Some/Path]

// example

$ scp -r lab2 z5555555@cse.unsw.edu.au:COMP1511/labs/

// copies into COMP1511/labs on z5555555's computer.

```

[Back to Main Menu](../)
