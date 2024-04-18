#pragma once
#include "image.h"

class ImageBrightener {
private:
	const std::shared_ptr<Image>& m_inputImage;
public:
	ImageBrightener(const std::shared_ptr<Image> inputImage);
	int BrightenWholeImage();
};
