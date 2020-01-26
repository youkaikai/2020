#pragma once
class cPanel
{
public:
	cPanel();
	virtual ~cPanel();

	void selectPanel();
	void deselectPanel();

	virtual void panelFunc();

	bool isSelected() {
		return mIsSelected;
	}
	

private:
	bool mIsSelected;
	char mDescription;

	

};


class cSelectblePanel: public cPanel
{
public:
	cSelectblePanel();
	virtual ~cSelectblePanel();

	virtual void panelFunc() {
		//クリックされたらmIsonを変更
	}
	
	bool getIsOn();

private:
	bool mIsOn;
};


class cDecidblePanel : public cPanel
{
public:
	cDecidblePanel();
	virtual ~cDecidblePanel();


	virtual void panelFunc() {
		//click
		//どの部分がクリックされたかを判定して
		//クリックされた部分に応じて
	}

	int getState();

private:
	int State();
};
