#pragma once


// MyDlg 对话框

class MyDlg : public CDialog
{
	DECLARE_DYNAMIC(MyDlg)

public:
	MyDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyDlg();

// 对话框数据
	enum { IDD = IDD_MYDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
