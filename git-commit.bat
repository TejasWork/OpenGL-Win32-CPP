@echo off
git add .
git rm -r --cached .vscode
git commit -a --allow-empty-message -m ""
git push -u origin main