# git-demo
This aim of this demo is to learn how to use git and github as well as build a c language source codes package for future.

## github and git
git init

git clone

git add

git commit

git push

git pull

git branch

    git branch 
        print the existing local branches, a "*" symbol before the branch denotes the current branch

    git branch -r
        print the remote branches

    git branch -a
        print the all the branches, including the local and remote branches

    git branch BranchName 
        build a new branch named BranchName

    git branch -d BranchName 
        delete a branch named BranchName

    git branch -vv 
        find out the remote branches that correspond to the local branches

    git branch -m oldBranchName newBranchName 
        rename a existing branch 

git checkout 

    git checkout FileName
        drop changes for the FileName file

    git checkout .
        drop changes for the current directory

    git checkout BranchName 
        Switch to the branch named BranchName 

    git checkout -b BranchName 
        Switch to the branch named BranchName if the branch exists, or build a branch named BranchName and switch to it 

git merge

## A portable C-code files for solving wave equations
main.c

utility_dynamic_memory.c

utility_dynamic_memory.h
