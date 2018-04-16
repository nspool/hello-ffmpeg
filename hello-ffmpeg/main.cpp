#include <iostream>
#include <fstream>
#include <sstream>

extern "C" 
{
	#include <libavcodec/avcodec.h>
	#include <libavformat/avformat.h>
	#include <libavformat/avio.h>
	#include <libswscale/swscale.h>
}

int main(int argc, char* argv[])
{
	// Open the initial context variables that are needed
	SwsContext *img_convert_ctx;
	AVFormatContext* format_ctx = avformat_alloc_context();
	AVCodecContext* codec_ctx = NULL;
	return 0;
}
