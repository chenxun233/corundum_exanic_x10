savedcmd_mqnic.o := ld -m elf_x86_64 -z noexecstack --no-warn-rwx-segments   -r -o mqnic.o @mqnic.mod 
