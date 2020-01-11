#pragma once

class CSingleton{
public:
	static CSingleton& GetInstance();

	int GetData() const;
	void SetData(int nData);

private:
	CSingleton(){}
	CSingleton(const CSingleton& rhs);
	~CSingleton(){}
	CSingleton& operator=(const CSingleton& rhs);

	int m_data;
};