//============================================================================
// Name        : SkillTree_EC.cpp
// Author      : AurelienDidier
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <iostream>
#include "SkillTree_EC.hpp"

using namespace std;

inline SkillTree::SkillTree(){
    skillName = "";
    skillPoint = 0;
    rightChild = NULL ;
    leftChild = NULL ;
    depth = 0;
}

inline SkillTree::~SkillTree(){
    leftChild -> ~SkillTree();
    rightChild -> ~SkillTree();
    delete (this);
}

inline void SkillTree::setLeftChild(SkillTreeleft){
    leftChild = left;
}

inline void SkillTree::setRightChild(SkillTreeright){
    rightChild = right;
}

inline int SkillTree::levelUpSkill(){
    skillPoint++;

}

inline void SkillTree::setName(string name){
    skillName = name;
}


inline void SkillTree::reset(){
    leftChild -> reset();
    rightChild -> reset();
    skillPoint = 0;
}

inline int SkillTree::getDepth(){
    leftChild -> getDepth();
    rightChild -> getDepth();
    depth++;

    if(leftChild == NULL && rightChild == NULL){
        return 0;
    }

    if(leftChild == NULL){
        return 1+rightChild->getDepth();
    }
    if(rightChild == NULL){
        return 1+leftChild->getDepth();
    }
    return 1+max(leftChild->getDepth(), rightChild->getDepth());
    }



inline void SkillTree::display(){

	    cout <<skillName << skillPoint<< endl;


	    if(leftChild != NULL){
	        leftChild->display();
	    }
	    if(rightChild != NULL){
	        rightChild->display();
	    }
}
