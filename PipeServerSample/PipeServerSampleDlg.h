
// PipeServerSampleDlg.h: 头文件
//

#pragma once


// CPipeServerSampleDlg 对话框
class CPipeServerSampleDlg : public CDialogEx
{
// 构造
public:
	CPipeServerSampleDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PIPESERVERSAMPLE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// 状态输出框
	CString m_Log;
	afx_msg void OnButtonConnect();
};
