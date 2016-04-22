// 21 april 2016

// TODO document
_UI_EXTERN HWND uiWindowsEnsureCreateControlHWND(DWORD dwExStyle, LPCWSTR lpClassName, LPCWSTR lpWindowName, DWORD dwStyle, HINSTANCE hInstance, LPVOID lpParam, BOOL useStandardControlFont);

// TODO document
_UI_EXTERN void uiWindowsEnsureDestroyWindow(HWND hwnd);

// TODO document
_UI_EXTERN void uiWindowsEnsureSetParent(HWND hwnd, HWND parent);

// TODO document
_UI_EXTERN void uiWindowsEnsureAssignControlIDZOrder(HWND hwnd, LONG_PTR controlID, HWND insertAfter);

// TODO document
_UI_EXTERN char *uiWindowsWindowText(HWND hwnd);
_UI_EXTERN void uiWindowsSetWindowText(HWND hwnd, const char *text);

// TODO document
_UI_EXTERN intmax_t uiWindowsWindowTextWidth(HWND hwnd);

// TODO document
// TODO keep uiWindowsControl?
_UI_EXTERN void uiWindowsControlQueueRelayout(uiWindowsControl *c);

// TODO document
// TODO point out this should only be used in a resize cycle
_UI_EXTERN void uiWindowsEnsureMoveWindowDuringResize(HWND hwnd, intmax_t x, intmax_t y, intmax_t width, intmax_t height);

// TODO document
_UI_EXTERN void uiWindowsRegisterWM_COMMANDHandler(HWND hwnd, BOOL (*handler)(uiControl *, HWND, WORD, LRESULT *), uiControl *c);
_UI_EXTERN void uiWindowsUnregisterWM_COMMANDHandler(HWND hwnd);

// TODO document
_UI_EXTERN void uiWindowsRegisterWM_NOTIFYHandler(HWND hwnd, BOOL (*handler)(uiControl *, HWND, NMHDR *, LRESULT *), uiControl *c);
_UI_EXTERN void uiWindowsUnregisterWM_NOTIFYHandler(HWND hwnd);

// TODO document
_UI_EXTERN void uiWindowsRegisterWM_HSCROLLHandler(HWND hwnd, BOOL (*handler)(uiControl *, HWND, WORD, LRESULT *), uiControl *c);
_UI_EXTERN void uiWindowsUnregisterWM_HSCROLLHandler(HWND hwnd);

// TODO document
_UI_EXTERN void uiWindowsRegisterReceiveWM_WININICHANGE(HWND hwnd);
_UI_EXTERN void uiWindowsUnregisterReceiveWM_WININICHANGE(HWND hwnd);




// everything below here is TODO

_UI_EXTERN void uiWindowsFinishControl(uiControl *c);
_UI_EXTERN void uiWindowsRearrangeControlIDsZOrder(uiControl *c);
