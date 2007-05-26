#pragma once

class Config
{
private:
	Config(void);
	~Config(void);
	static Config* instance;

private:
	static Config* getinstance();
};
