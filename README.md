README for QuickTimeTcl 3.1
=======================================

QuickTimeTcl is an extension to Tcl/Tk on Mac OS X and Windows that provides many bindings to QuickTime from Tcl/Tk. Starting with this release, support for Mac OS Classic has been abandoned. 
 
**Documentation:**

For more documentation, see the manual pages in the '`docs`' folder. These contain the latest information. There are also some simple tcl example code in the '`ExampleCode`' folder that can be helpful; just source them in.

**Requirements:**

Tcl/Tk 8.4 (8.4.4 on Mac OS X) and QuickTime 5 or higher.

**Testing:**

This version of QuickTimeTcl was originally developed and tested on Mac OS X 10.2 and Windows 2000 using Tcl/Tk 8.4. 

**QuickTime:**

Download QuickTime from "[http://www.apple.com/quicktime/download](http://www.apple.com/quicktime/download)", or get a standalone installer from (good for switching between versions or if you are behind a firewall) "[http://www.apple.com/quicktime/download/support](http://www.apple.com/quicktime/download/support)". You don't need the pay (Pro) version, as that has been obsolete for some time now. Not even the original author had it, and that worked fine anyway. Many things, although not all, you pay for with QuickTime Pro can be reproduced by some coding using this package :-)
    
**Installing:**

Just run the installer on the respective platform, or:
    
 Mac OS X: Make a folder QuickTimeTcl3.1 with the QuickTimeTcl.dylib and pkgIndex.tcl files inside, and put this folder either in `/Library/Tcl/` or `~/Library/Tcl/`.

 Windows: put the QuickTimeTcl directory inside the lib directory of the Tcl directory, as:
    
        Program
            ...
            Tcl
                bin
                doc
                include
                lib
                    ...
                    QuickTimeTcl
                        QuickTimeTcl.dll
                        pkgIndex.tcl
                    ...


**WebCams on Windows**:

On Windows, the '`vdig`' (video digitizer) component which should be the hardware manufacturers responsibilty is sadly lacking on most WebCams. The grabber is therefore only tested with an emulated 'vdig' component WinVdig from [www.vdig.com (.org)](http://www.eden.net.nz/7/20071008/). If you never got a QuickTime '`vdig`' component with your PC camera, try WinVdig. Note, however, that this is only a second best solution.                 
   
**Compiling:**
 
 Mac OS X:

  If you are on a version of Mac OS X that still uses ProjectBuilder, use '`pbxbuild clean install`' in the directory of the ProjectBuilder file. Otherwise, use Xcode.

 Win32:

  If you compile under Windows, the '`Cursor`' symbol in '`X.h`' needs to be redefined as '`XCursor`', just as what is done on the Mac.         
    
**BUGS:**

If you want to see some printouts of what is happening inside QuickTimeTcl, use the command '`quicktimetcl::debuglevel 3`'.
    
 - There are some tuning to be done to get maximal performance for QTVR panoramas; the cursor flashes which is perhaps the cause.
 - (Windows) -resizable not working.
 - The "effect" command is not implemented yet for Mac OS X.
            
**LICENSE:**
          
This software is distributed under the BSD license. c.f. [http://www.opensource.org/licenses/bsd-license](http://www.opensource.org/licenses/bsd-license)
    

**Acknowledgements:**

Bruce O'Neel made the original version of QuickTimeTcl; The Windows port contains some tiny code fragments from Steve Aronson.

Enjoy, Mats Bengtsson

matben@privat.utfors.se

    Hamngatan 21
    SE-582 26  Linkoping
    Sweden

 Copyright 1998 Bruce O'Neel, Copyright 2000-2003 Mats Bengtsson
