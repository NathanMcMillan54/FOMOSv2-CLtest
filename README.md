# FOMOSv2-CLtest

This is just a test for FOMOS trying to make it a real OS

If this doesn't go well it will probably end up like FOMOSv1 except it's a terminal.

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
