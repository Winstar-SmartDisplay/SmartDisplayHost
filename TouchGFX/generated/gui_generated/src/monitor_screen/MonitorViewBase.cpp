/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/monitor_screen/MonitorViewBase.hpp>
#include "BitmapDatabase.hpp"

MonitorViewBase::MonitorViewBase() :
    buttonCallback(this, &MonitorViewBase::buttonCallbackHandler),
    sliderValueChangedCallback(this, &MonitorViewBase::sliderValueChangedCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    tiledImage.setBitmap(touchgfx::Bitmap(BITMAP_BASE_SCREEN_ID));
    tiledImage.setPosition(0, 0, 800, 480);
    tiledImage.setOffset(0, 0);

    toggleButton1.setXY(731, 393);
    toggleButton1.setBitmaps(touchgfx::Bitmap(BITMAP_TOGGLEBUTTON_1_0_ID), touchgfx::Bitmap(BITMAP_TOGGLEBUTTON_1_1_ID));
    toggleButton1.setAction(buttonCallback);

    button1.setXY(650, 406);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON1_1_ID), touchgfx::Bitmap(BITMAP_BUTTON1_0_ID));
    button1.setAction(buttonCallback);

    slider3.setXY(159, 0);
    slider3.setBitmaps(touchgfx::Bitmap(BITMAP_SILDE_2_ID), touchgfx::Bitmap(BITMAP_SILDE_1_ID), touchgfx::Bitmap(BITMAP_GAUGE_1_ID));
    slider3.setupVerticalSlider(22, 5, 0, 0, 285);
    slider3.setValueRange(0, 100);
    slider3.setValue(0);
    slider3.setNewValueCallback(sliderValueChangedCallback);

    slider4.setXY(245, 0);
    slider4.setBitmaps(touchgfx::Bitmap(BITMAP_SILDE_2_ID), touchgfx::Bitmap(BITMAP_SILDE_1_ID), touchgfx::Bitmap(BITMAP_BATTERY_0_ID));
    slider4.setupVerticalSlider(22, 5, 0, 0, 285);
    slider4.setValueRange(0, 100);
    slider4.setValue(0);
    slider4.setNewValueCallback(sliderValueChangedCallback);

    slider5.setXY(331, 0);
    slider5.setBitmaps(touchgfx::Bitmap(BITMAP_SILDE_2_ID), touchgfx::Bitmap(BITMAP_SILDE_1_ID), touchgfx::Bitmap(BITMAP_INDICATOR_2_ID));
    slider5.setupVerticalSlider(22, 5, 0, 0, 285);
    slider5.setValueRange(0, 100);
    slider5.setValue(0);
    slider5.setNewValueCallback(sliderValueChangedCallback);

    slider6.setXY(414, 0);
    slider6.setBitmaps(touchgfx::Bitmap(BITMAP_SILDE_2_ID), touchgfx::Bitmap(BITMAP_SILDE_1_ID), touchgfx::Bitmap(BITMAP_VERTICALSLIDER_0_ID));
    slider6.setupVerticalSlider(22, 5, 0, 0, 285);
    slider6.setValueRange(0, 100);
    slider6.setValue(0);
    slider6.setNewValueCallback(sliderValueChangedCallback);

    slider7.setXY(495, 0);
    slider7.setBitmaps(touchgfx::Bitmap(BITMAP_SILDE_2_ID), touchgfx::Bitmap(BITMAP_SILDE_1_ID), touchgfx::Bitmap(BITMAP_TEMPERATURE_ID));
    slider7.setupVerticalSlider(22, 5, 0, 0, 285);
    slider7.setValueRange(0, 100);
    slider7.setValue(0);
    slider7.setNewValueCallback(sliderValueChangedCallback);

    slider8.setXY(577, 0);
    slider8.setBitmaps(touchgfx::Bitmap(BITMAP_SILDE_2_ID), touchgfx::Bitmap(BITMAP_SILDE_1_ID), touchgfx::Bitmap(BITMAP_BUTTON_9_ID));
    slider8.setupVerticalSlider(22, 5, 0, 0, 285);
    slider8.setValueRange(0, 100);
    slider8.setValue(0);
    slider8.setNewValueCallback(sliderValueChangedCallback);

    slider9.setXY(656, 0);
    slider9.setBitmaps(touchgfx::Bitmap(BITMAP_SILDE_2_ID), touchgfx::Bitmap(BITMAP_SILDE_1_ID), touchgfx::Bitmap(BITMAP_BUTTON_3_ID));
    slider9.setupVerticalSlider(22, 5, 0, 0, 285);
    slider9.setValueRange(0, 100);
    slider9.setValue(0);
    slider9.setNewValueCallback(sliderValueChangedCallback);

    slider10.setXY(732, 0);
    slider10.setBitmaps(touchgfx::Bitmap(BITMAP_SILDE_2_ID), touchgfx::Bitmap(BITMAP_SILDE_1_ID), touchgfx::Bitmap(BITMAP_HORIZONTALSLIDER_0_ID));
    slider10.setupVerticalSlider(22, 5, 0, 0, 285);
    slider10.setValueRange(0, 100);
    slider10.setValue(0);
    slider10.setNewValueCallback(sliderValueChangedCallback);

    slider2.setXY(79, 0);
    slider2.setBitmaps(touchgfx::Bitmap(BITMAP_SILDE_2_ID), touchgfx::Bitmap(BITMAP_SILDE_1_ID), touchgfx::Bitmap(BITMAP_GAUGE_1_ID));
    slider2.setupVerticalSlider(22, 5, 0, 0, 285);
    slider2.setValueRange(0, 100);
    slider2.setValue(0);
    slider2.setNewValueCallback(sliderValueChangedCallback);

    slider1.setXY(3, 0);
    slider1.setBitmaps(touchgfx::Bitmap(BITMAP_SILDE_2_ID), touchgfx::Bitmap(BITMAP_SILDE_1_ID), touchgfx::Bitmap(BITMAP_GAUGE_2_ID));
    slider1.setupVerticalSlider(22, 5, 0, 0, 285);
    slider1.setValueRange(0, 100);
    slider1.setValue(0);
    slider1.setNewValueCallback(sliderValueChangedCallback);

    image1.setXY(20, 354);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_INDICATOR_0_ID));

    image2.setXY(96, 354);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_INDICATOR_0_ID));

    image3.setXY(174, 354);
    image3.setBitmap(touchgfx::Bitmap(BITMAP_INDICATOR_0_ID));

    image4.setXY(262, 354);
    image4.setBitmap(touchgfx::Bitmap(BITMAP_INDICATOR_0_ID));

    image5.setXY(347, 354);
    image5.setBitmap(touchgfx::Bitmap(BITMAP_INDICATOR_0_ID));

    image6.setXY(431, 354);
    image6.setBitmap(touchgfx::Bitmap(BITMAP_INDICATOR_0_ID));

    image7.setXY(512, 354);
    image7.setBitmap(touchgfx::Bitmap(BITMAP_INDICATOR_0_ID));

    image8.setXY(594, 354);
    image8.setBitmap(touchgfx::Bitmap(BITMAP_INDICATOR_0_ID));

    image9.setXY(675, 354);
    image9.setBitmap(touchgfx::Bitmap(BITMAP_INDICATOR_0_ID));

    image10.setXY(752, 354);
    image10.setBitmap(touchgfx::Bitmap(BITMAP_INDICATOR_0_ID));

    add(tiledImage);
    add(toggleButton1);
    add(button1);
    add(slider3);
    add(slider4);
    add(slider5);
    add(slider6);
    add(slider7);
    add(slider8);
    add(slider9);
    add(slider10);
    add(slider2);
    add(slider1);
    add(image1);
    add(image2);
    add(image3);
    add(image4);
    add(image5);
    add(image6);
    add(image7);
    add(image8);
    add(image9);
    add(image10);
}

void MonitorViewBase::setupScreen()
{

}

void MonitorViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &toggleButton1)
    {
        //ChangeToSettingView
        //When toggleButton1 clicked change screen to Setting
        //Go to Setting with no screen transition
        application().gotoSettingScreenNoTransition();
    }
    else if (&src == &button1)
    {
        //BuzzerOn
        //When button1 clicked call virtual function
        //Call BuzzerOn
        BuzzerOn();
    }
}

void MonitorViewBase::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &slider3)
    {
        //Slider3ChangeValue
        //When slider3 value changed call virtual function
        //Call Slider3ChangeValue
        Slider3ChangeValue(value);
    }
    else if (&src == &slider4)
    {
        //Slider4ChangeValue
        //When slider4 value changed call virtual function
        //Call Slider4ChangeValue
        Slider4ChangeValue(value);
    }
    else if (&src == &slider5)
    {
        //Slider5ChangeValue
        //When slider5 value changed call virtual function
        //Call Slider5ChangeValue
        Slider5ChangeValue(value);
    }
    else if (&src == &slider6)
    {
        //Slider6ChangeValue
        //When slider6 value changed call virtual function
        //Call Slider6ChangeValue
        Slider6ChangeValue(value);
    }
    else if (&src == &slider7)
    {
        //Slider7ChangeValue
        //When slider7 value changed call virtual function
        //Call Slider7ChangeValue
        Slider7ChangeValue(value);
    }
    else if (&src == &slider8)
    {
        //Slider8ChangeValue
        //When slider8 value changed call virtual function
        //Call Slider8ChangeValue
        Slider8ChangeValue(value);
    }
    else if (&src == &slider9)
    {
        //Slider9ChangeValue
        //When slider9 value changed call virtual function
        //Call Slider9ChangeValue
        Slider9ChangeValue(value);
    }
    else if (&src == &slider10)
    {
        //Slider10ChangeValue
        //When slider10 value changed call virtual function
        //Call Slider10ChangeValue
        Slider10ChangeValue(value);
    }
    else if (&src == &slider2)
    {
        //Slider2ChangeValue
        //When slider2 value changed call virtual function
        //Call Slider2ChangeValue
        Slider2ChangeValue(value);
    }
    else if (&src == &slider1)
    {
        //Slider1ChangeValue
        //When slider1 value changed call virtual function
        //Call Slider1ChangeValue
        Slider1ChangeValue(value);
    }
}
