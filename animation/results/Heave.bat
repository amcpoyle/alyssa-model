@echo off
SET PATH=;C:/Program Files/OpenModelica1.25.4-64bit/bin/;%PATH%;
SET ERRORLEVEL=
CALL "%CD%/Heave.exe" %*
SET RESULT=%ERRORLEVEL%

EXIT /b %RESULT%
