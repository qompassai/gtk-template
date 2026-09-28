# Testing this template's starter

Each starter file documents its own validation command at the top (`nginx -t`, `terraform validate`, `named-checkzone`, ...). Run those before committing changes.

General rule: if the starter cannot be checked automatically, validate it
by hand and record the exact commands here so the next person can repeat
them. CI runs the `sanity` job (required files + placeholder check) on
every push.
