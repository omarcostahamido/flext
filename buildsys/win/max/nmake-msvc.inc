INCPATH=$(INCPATH) /I$(MAXSDKPATH)\max-includes /I$(MAXSDKPATH)\msp-includes
LIBPATH=$(LIBPATH) /LIBPATH:$(MAXSDKPATH)\max-includes /LIBPATH:$(MAXSDKPATH)\msp-includes

DEFS=$(DEFS) /DFLEXT_SYS=1
CFLAGS=$(CFLAGS) /Zp2 

# these are both in MAXSDKPATH
LIBS=$(LIBS) maxapi.lib maxaudio.lib