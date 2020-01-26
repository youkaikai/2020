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
		//�N���b�N���ꂽ��mIson��ύX
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
		//�ǂ̕������N���b�N���ꂽ���𔻒肵��
		//�N���b�N���ꂽ�����ɉ�����
	}

	int getState();

private:
	int State();
};
