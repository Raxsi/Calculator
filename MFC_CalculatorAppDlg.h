
// MFC_CalculatorAppDlg.h : header file
//

#pragma once
#include <string>
#include <sstream>
#include <stack>
#include <cctype>
#include <stdexcept>

// CMFCCalculatorAppDlg dialog
class CMFCCalculatorAppDlg : public CDialogEx
{
	// Construction
public:
	CMFCCalculatorAppDlg(CWnd* pParent = nullptr);	// standard constructor
	double EvaluateExpression(const std::string& expression, bool& success);
	int GetPrecedence(char op);
	double ApplyOperation(double a, double b, char op);
	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_CALCULATORAPP_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	

	// Implementation
protected:
	HICON m_hIcon;
	CString currentText;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	CEdit m_editDisplay;
	afx_msg void OnBnClickedButtonAdd();
	afx_msg void OnBnClickedButtonEqual();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButtonSubtract();
	afx_msg void OnBnClickedButtonMultiply();
	afx_msg void OnBnClickedButtonDivide();
	afx_msg void OnBnClickedButtonClear();
	afx_msg void OnBnClickedButtonDecimal();
};
