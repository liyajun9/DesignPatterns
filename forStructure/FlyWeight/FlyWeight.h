#pragma once

typedef struct ExtrinsicData{
	int data1;
	int data2;
	int data3;
	ExtrinsicData(){}
	ExtrinsicData(int a, int b, int c){
		data1 = a;
		data2 = b;
		data3 = c;
	}

	bool operator<(const ExtrinsicData& rhs) const{
		if(data1 < rhs.data1)
			return true;
		else if(data1 == rhs.data1){
			if(data2 < rhs.data2)
				return true;
			else if(data2 == rhs.data2)
				return data3 < rhs.data3;
		}		
		return false;
	}
}EXDATA;

class CFlyWeight{
public:
	CFlyWeight(int data1, int data2, int data3):m_nIntrinsicData1(data1),m_nIntrinsicData2(data2),m_nIntrinsicData3(data3),m_exData(0,0,0){}

	void SetExData(const EXDATA& exData);
	const EXDATA& GetExData() const;

	int GetInData1(){ return m_nIntrinsicData1; }
	int GetInData2(){ return m_nIntrinsicData2; }
	int GetInData3(){ return m_nIntrinsicData3; }

private:
	CFlyWeight();

	int m_nIntrinsicData1;
	int m_nIntrinsicData2;
	int m_nIntrinsicData3;

	EXDATA m_exData;
};