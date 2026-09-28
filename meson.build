# Build: meson setup build && ninja -C build
# Docs: https://mesonbuild.com/ and https://www.gtk.org/docs/
project('hello-gtk', 'c', version : '0.1.0')
gtk = dependency('gtk4')
executable('hello', 'src/main.c', dependencies : gtk)
