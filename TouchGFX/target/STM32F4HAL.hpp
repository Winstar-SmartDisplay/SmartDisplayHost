
#ifndef STM32F4HAL_HPP
#define STM32F4HAL_HPP

#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/touch/TouchController.hpp>

/*
extern "C"
{
	#include "w25q128jv.h"
}
*/


/**
 * @class STM32F4HAL STM32F4HAL.hpp platform/hal/ST/mcu/stm32f4x9/STM32F4HAL.hpp
 *
 * @brief HAL implementation for STM32F4.
 *
 *        HAL implementation for STM32F4. Based on the ST CubeF4 API.
 *
 * @sa HAL
 */
class STM32F4HAL : public touchgfx::HAL
{
public:
    /**
     * @fn STM32F4HAL::STM32F4HAL(touchgfx::DMA_Interface& dma, touchgfx::LCD& display, touchgfx::TouchController& tc, uint16_t width, uint16_t height) : touchgfx::HAL(dma, display, tc, width, height)
     *
     * @brief Constructor.
     *
     *        Constructor. Initializes members.
     *
     * @param [in,out] dma     Reference to DMA interface.
     * @param [in,out] display Reference to LCD interface.
     * @param [in,out] tc      Reference to Touch Controller driver.
     * @param width            Width of the display.
     * @param height           Height of the display.
     */
    STM32F4HAL(touchgfx::DMA_Interface& dma, touchgfx::LCD& display, touchgfx::TouchController& tc, uint16_t width, uint16_t height) : touchgfx::HAL(dma, display, tc, width, height)
    {
    }

    /**
     * @fn virtual void STM32F4HAL::disableInterrupts();
     *
     * @brief Disables the DMA and LCD interrupts.
     *
     *        Disables the DMA and LCD interrupts.
     */
    virtual void disableInterrupts();

    /**
     * @fn virtual void STM32F4HAL::enableInterrupts();
     *
     * @brief Enables the DMA and LCD interrupts.
     *
     *        Enables the DMA and LCD interrupts.
     */
    virtual void enableInterrupts();

    /**
     * @fn virtual void STM32F4HAL::configureInterrupts();
     *
     * @brief Sets the DMA and LCD interrupt priorities.
     *
     *        Sets the DMA and LCD interrupt priorities.
     */
    virtual void configureInterrupts();

    /**
     * @fn virtual void STM32F4HAL::enableLCDControllerInterrupt();
     *
     * @brief Configure the LCD controller to fire interrupts at VSYNC.
     *
     *        Configure the LCD controller to fire interrupts at VSYNC. Called automatically
     *        once TouchGFX initialization has completed.
     */
    virtual void enableLCDControllerInterrupt();

    /**
     * @fn virtual uint16_t getTFTCurrentLine()
     *
     * @brief Get the current line (Y) of the TFT controller
     *
     * This function is used to obtain the progress of the TFT (LTDC)
     * controller. More specifically, the line (or Y-value) currently being transferred.
     *
     * Note: The value must be adjusted to account for vertical back porch before returning,
     * such that the value is always within the range of 0 <= value < actual display height in pixels
     *
     * It is used for the REFRESH_STRATEGY_OPTIM_SINGLE_BUFFER_TFT_CTRL frame refresh strategy
     * in order to synchronize frame buffer drawing with TFT controller progress. If this
     * strategy is used, the concrete HAL subclass must provide an override of this function
     * that returns correct line value. If this strategy is not used, then the getTFTCurrentLine
     * function is never called and can be disregarded.
     *
     * @return The currently processed line of the LTDC
     */
    virtual uint16_t getTFTCurrentLine();

    /**
     * @fn virtual bool HAL::blockCopy(void* RESTRICT dest, const void* RESTRICT src, uint32_t numBytes);
     *
     * @brief This function performs a platform-specific memcpy.
     *
     *        This function performs a platform-specific memcpy, if supported by the hardware.
     *
     * @param [out] dest Pointer to destination memory.
     * @param [in] src   Pointer to source memory.
     * @param numBytes   Number of bytes to copy.
     *
     * @return true if the copy succeeded, false if copy was not performed.
     */
    virtual bool blockCopy(void* RESTRICT dest, const void* RESTRICT src, uint32_t numBytes);
    
protected:
    /**
     * @fn virtual uint16_t* STM32F4HAL::getTFTFrameBuffer() const;
     *
     * @brief Gets the frame buffer address used by the TFT controller.
     *
     *        Gets the frame buffer address used by the TFT controller.
     *
     * @return The address of the frame buffer currently being displayed on the TFT.
     */
    virtual uint16_t* getTFTFrameBuffer() const;

    /**
     * @fn virtual void STM32F4HAL::setTFTFrameBuffer(uint16_t* adr);
     *
     * @brief Sets the frame buffer address used by the TFT controller.
     *
     *        Sets the frame buffer address used by the TFT controller.
     *
     * @param [in,out] adr New frame buffer address.
     */
    virtual void setTFTFrameBuffer(uint16_t* adr);
};

#endif // STM32F4HAL_HPP
