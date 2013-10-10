// MyDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "GrayBoxSample.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialog)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(MyDlg::IDD, pParent)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialog)
END_MESSAGE_MAP()


// MyDlg 消息处理程序
