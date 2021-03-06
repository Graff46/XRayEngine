#pragma once
class ESceneObjectTool;
class UIObjectTool :public UIToolCustom
{
public:
	UIObjectTool();
	virtual ~UIObjectTool();
	virtual void Draw();
	void RefreshList();
	IC const char* Current() { return m_Current; }
	virtual void OnDrawUI();
	ESceneObjectTool* ParentTools;
private:
	void OnItemFocused(ListItem*item);
	void SelByRefObject(bool flag);
	void MultiSelByRefObject(bool flag);
	const char* m_Current;
	UIItemListForm* m_ObjectList;
	bool m_MultiAppend;
	bool m_PropRandom;
	bool m_RandomAppend;
	float m_selPercent;
	bool m_Selection;
};