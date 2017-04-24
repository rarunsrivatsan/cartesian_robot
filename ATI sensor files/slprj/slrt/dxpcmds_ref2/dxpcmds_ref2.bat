@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\VCVARSALL.BAT " x86

cd .
nmake -f dxpcmds_ref2.mk  EXT_MODE=0 ISPROTECTINGMODEL=NOTPROTECTING OPTS="-DSLMSG_ALLOW_SYSTEM_ALLOC"
@if errorlevel 1 goto error_exit
exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
