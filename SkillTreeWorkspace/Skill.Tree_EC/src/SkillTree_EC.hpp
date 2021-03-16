/*
 * SkillTree_EC.hpp
 *
 *  Created on: 9 mars 2021
 *      Author: GAME1.1
 */

#ifndef SKILLTREE_ECHPP
#define SKILLTREE_ECHPP


#ifndef SkillTree VosInitiales
#define SkillTree VosInitiales

#include <string>
#include <iostream>
using namespace std;

class SkillTree {
    private :
        string skillName;
        int skillPoint;
        SkillTree rightChild;
        SkillTree* leftChild;
        int static nodeCounter;
        int static treeCounter;
        int depth;

    public :
        SkillTree();
        ~SkillTree();

        void setName(string name);
        void setLeftChild(SkillTreeleft);
        void setRightChild(SkillTreeright);
        int levelUpSkill();
        void reset();
        int getDepth();
        void display();

};
#endif SkillTree_ECHPP
