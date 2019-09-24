#!/usr/bin/env sh
PWD=$(pwd)
mkdir $1
cd $1
cp ../template.mk ./Makefile
printf "#include <bits/stdc++.h>\n\nusing namespace std;\n\nint main()\n{\n\n\treturn 0;\n}" > "$1".cpp
(cd "$PWD"; $VISUAL "$1".cpp +':silent exec "YcmGenerateConfig"')
