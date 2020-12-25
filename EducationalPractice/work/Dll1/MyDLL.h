#pragma once
#ifdef MyDLL_EXPORTS
#define MyDLL_API __declspec(dllexport) 
#else
#define MyDLL_API __declspec(dllimport) 
#endif
#include <iostream>
#include <vector>

class MyDLL
{
public:
	// Объявление функций
	static MyDLL_API std::vector<char> zap_vector(int value);
	static MyDLL_API void writeTo(const std::string& filepath, const  std::vector<char>& data);
	static MyDLL_API void writeTo1(const std::string& filepath, const  std::vector<char>& data);
};