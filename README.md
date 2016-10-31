freebsd-chromium
================

Chromium port for FreeBSD

There is a Wiki page at
* https://wiki.freebsd.org/Chromium

For a list of all known bugs, see:
* https://bugs.freebsd.org/bugzilla/buglist.cgi?quicksearch=www%2Fchromium

When porting Chromium, here are some rules to adhere to. These rules comply
with upstream Chromium, and in case some other BSD would try using our
patches, ideally we would have one main codebase for all BSDs or at least
other projects could use our patches.

* GN: Use "is\_bsd", not "is\_freebsd" or some other identifier.

* C++ files: \_bsd.cc, not \_freebsd.cc and \_openbsd.cc. The implementation
can be divided inside like Chromium developers divide Linux/Android/ChromeOS
in one .cc file.
* C++ code: generally OS\_BSD, in some cases OS\_SOMEBSD when it is really
necessary. Never use \_\_FreeBSD\_\_, if OS\_\* is not defined then there is
a reason for this. In such cases, read BUILD.gn for that target and find out
how to do it correctly.
* Python: this needs to be investigated, it is rather unclear now: a lot of
different calls and approaches already exist in the code.  But fortunately
it is not very important now.
