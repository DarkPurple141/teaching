#!/bin/sh

HEAD="---\nlayout: code\n---\n\`\`\`c"
FOOT="\`\`\`"

# don't run twice

for filename in *.c *.h; do
    if [[ $filename =~ "*.md" ]]; then
      continue
    fi
    name="${filename%.*}"
    name="$name.md"
    echo $name
    echo $HEAD > $name
    cat $filename >> $name
    echo $FOOT >> $name
done
