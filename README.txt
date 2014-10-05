This is the command for configuring git

reference: https://www.youtube.com/watch?v=RLFVbcrdWi0
https://www.youtube.com/watch?v=xh32DIHApZA

create a test reposiry in github
commands to configure:

git config --global user.name "skyhit"
git config --global user.email "liwei0502101@gmail.com"
git init
git remote add origin https://github.com/skyhit123/test
gedit README.txt
git add README.txt (only add README.txt)
or git . (add all the files)

git commit -m 'first commit'
git push origin master (push the files into the master branch in the github)

git reset --soft HEAD^ (remove the commit (usually wrongly type) but keep the change to the file in the PC)

git reset --hard HEAD^ (remove the commit (usually wrongly type) but delete the change to the file in the PC)

git clone https://github.com/skyhit123/test.git (copy the source files from github)

git pull origin master (download the changes someone else has made, if he used "git clone" to downlaod your sources file and "git commit" to make some new changes (e.g. upload a new file))
