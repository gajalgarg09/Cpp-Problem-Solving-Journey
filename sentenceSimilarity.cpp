// You are given two strings sentence1 and sentence2, each representing a sentence composed of words.
// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
// Each word consists of only uppercase and lowercase English characters.
// Two sentences s1 and s2 are considered similar if it is possible to insert an arbitrary sentence (possibly empty) inside one of these sentences
// such that the two sentences become equal. Note that the inserted sentence must be separated from existing words by spaces.
// For example,
// s1 = "Hello Jane" and s2 = "Hello my name is Jane" can be made equal by inserting "my name is" between "Hello" and "Jane" in s1.
// s1 = "Frog cool" and s2 = "Frogs are cool" are not similar, since although there is a sentence "s are" inserted into s1, it is not separated from "Frog" by a space.
// Given two sentences sentence1 and sentence2, return true if sentence1 and sentence2 are similar. Otherwise, return false.


#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        // Helper function to split the sentence into words
        auto splitWords = [](const string& sentence) {
            vector<string> words;
            string word = "";
            for (char c : sentence) {
                if (c == ' ') {
                    if (!word.empty()) {
                        words.push_back(word);
                        word = "";
                    }
                } else {
                    word += c;
                }
            }
            if (!word.empty()) words.push_back(word);
            return words;
        };

        // Split both sentences into words
        vector<string> words1 = splitWords(sentence1);
        vector<string> words2 = splitWords(sentence2);
        
        // Ensure words1 is the longer sentence
        if (words1.size() < words2.size()) swap(words1, words2);
        
        int start = 0, end = 0;
        int n1 = words1.size(), n2 = words2.size();
        
        // Compare from the start
        while (start < n2 && words1[start] == words2[start]) start++;
        
        // Compare from the end
        while (end < n2 && words1[n1 - end - 1] == words2[n2 - end - 1]) end++;
        
        // Check if the remaining unmatched part is in the middle
        return start + end >= n2;
    }
};
