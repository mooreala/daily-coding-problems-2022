/*
* PrefixMapSum.h
* 
* Header file for declaring the PrefixMapSum class.
*/

#include <string>
#include <map>

#ifndef PrefixMapSum_H
#define PrefixMapSum_H

class PrefixMapSum {
    public:
        std::map<std::string, int> prefixMap;

        // member functions
        void printProblem();
        void insert(std::string key, int value);
        int sum(std::string prefix);
};

#endif