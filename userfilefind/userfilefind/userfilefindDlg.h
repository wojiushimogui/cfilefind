
// userfilefindDlg.h : ͷ�ļ�
//

#pragma once


// CuserfilefindDlg �Ի���
class CuserfilefindDlg : public CDialogEx
{
// ����
public:
	CuserfilefindDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_USERFILEFIND_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CMenu m_menu;
	afx_msg void On32771_newproject();
};
