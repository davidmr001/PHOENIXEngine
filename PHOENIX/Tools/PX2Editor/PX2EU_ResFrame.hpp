// PX2EU_ResFrame.hpp

#ifndef PX2EU_RESFRAME_HPP
#define PX2EU_RESFRAME_HPP

#include "PX2EU_ResTree.hpp"
#include "PX2EU_ResList.hpp"
#include "PX2UISplitterFrame.hpp"
#include "PX2Canvas.hpp"
#include "PX2EU_ResGridFrame.hpp"

namespace PX2
{

	class PX2_EDITOR_ITEM EU_ResFrame : public UIFrame
	{
		PX2_DECLARE_RTTI;
		PX2_NEW(EU_ResFrame);
		PX2_DECLARE_STREAM(EU_ResFrame);

	public:
		EU_ResFrame();
		virtual ~EU_ResFrame();

		void _SpliterDragingCallback(UIFrame *frame, UICallType type);

		virtual void OnSizeChanged();
		virtual void OnEvent(Event *ent);

	protected:
		void _SetFramePos();
		void _RefreshUICallback(UIFrame *frame, UICallType type);

		UIFramePtr mToolFrame;
		CanvasPtr mTreeCanvas;
		EU_ResTreePtr mTreeDirs;

		UIFramePtr mRightFrame;
		EU_ResListPtr mResList;
		EU_GridFramePtr mResGrid;
		UISplitterFramePtr mSplitter;
		UIFramePtr mResFramePickInfo;
		UIFTextPtr mResFramePickInfoText;
	};

	PX2_REGISTER_STREAM(EU_ResFrame);
	typedef Pointer0<EU_ResFrame> EU_ResFramePtr;

}

#endif