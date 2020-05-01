#include <iostream>

/*
class Log {
public:
	enum logLevel { levelError, levelWarning, levelInfo };
private:
	logLevel m_LogLevel = levelInfo; //Member variable: m_
public:
	void SetLevel(logLevel level) {
		m_LogLevel = level;
	}

	void Warn(const char* message) {
		if (m_LogLevel >= levelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void Error(const char* message) {
		if (m_LogLevel >= levelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Info(const char* message) {
		if (m_LogLevel >= levelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

int main() {
	Log log;
	log.SetLevel(Log::levelWarning); 
	log.Warn("Hello!");
	std::cin.get();
}

*/