# FOMOSv2-CLtest

This is just a test for FOMOS trying to make it a real OS

If this doesn't go well it will probably end up like FOMOSv1 except it's a terminal.

This is just a terminal replacement for Linux.

# Setup
```shell script
sh setup.sh
```

Running this will setup FOMOS and teach you the basics of FOMOS.

#
# For developers

After you're done working on FOMOSv2 run:

```shell script
sh deleteCompiledFiles.sh
```

Also don't run anything in ```multiboot/``` that is for making a BIOS.

A lot of stuff in the future will probably be copied from Linux, for now ```multiboot/``` will just be a directory that 
makes FOMOS look like a real OS.


If you are a developer and want to do stuff with ```Fopen``` then you should run this:
```shell script
cd FOMOSCL/CL/usrFiles/
touch test.txt
```

#
In ```multiboot/``` that is where testing is done for making a BIOS script. Everything in ```multiboot/``` is copied and is just for trying to figure out how to write a BIOS for FOMOS.


Here is how to run ```hello-world/``` in ```multiboot/```

```shell script
make -C multiboot/hello-world run
qemu-system-i386 -kernel 'main.elf'
```

When you run ```main.elf``` it will return:
```shell script
hello world
``` 

To make it run as a 'operating system' on a device run:
```shell script
qemu-system-x86_64 -drive file=main.img,format=raw
```

You can burn ```main.img``` to a USB and run it as an 'operating system' that just returns ```hello world```. But that is a good start to making FOMOS a real OS.
