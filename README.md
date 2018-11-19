# Hactoberfest
Step by step description of creating a pull request for beginners

OS: Linux

Steps:

1. Fork the repository so that you can work on the repo locally.

2. Create upstream (Do it only once) 

		git remote add upstream <clone_link>

   For checking streams
	
		git remote -v

you can get clone_link in **Clone or Download**.

3. Open the terminal (ctrl + alt + t) and run below commands, 

		git status 
		git add . 
		git commit -m "commit_message"

4. Run below steps to sync your branch with the master branch

		git fetch upstream
		git merge upstream/master

5. To final commit

		git push origin master

6. If there is something left on stack and you don't want it

		git stash

Note : Step 4 is not required if you are sure of the fact that the last pull request is yours.

==============================

If someone shared a repo with you and you have that folder in your local system and want to link that directory with github repo,

		git remote add <repo_link>
		
If you have a directory in your local system and an empty repo on github and want to link both,

		git remote add -u <repo_link>

Enjoy
