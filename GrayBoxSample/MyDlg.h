#pragma once


// MyDlg �Ի���

class MyDlg : public CDialog
{
	DECLARE_DYNAMIC(MyDlg)

public:
	MyDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg();

// �Ի�������
	enum { IDD = IDD_MYDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
