/*
 *  FSConst.h
 *  PeopleNewsReaderPhone
 *
 *  Created by people.com.cn on 12-8-7.
 *  Copyright 2012 people.com.cn. All rights reserved.
 *
 */

#define APP_COREDATA_MODEL_NAME @"PeopleNewsReaderPhone"


//ganzf***********************************************************Begin

//通知
#define NSNOTIF_POPOCITYLISTCONTROLLER @"NSNOTIF_POPOCITYLISTCONTROLLER"
#define NSNOTIF_LOCALNEWSLISTREFRESH @"NSNOTIF_LOCALNEWSLISTREFRESH"
#define NSNOTIF_LOCALNEWSLIST_CITYSELECTED @"NSNOTIF_LOCALNEWSLIST_CITYSLECTED"
#define NSNOTIF_LOCALNEWSLIST_CITYSELECTED_KEY @"NSNOTIF_LOCALNEWSLIST_CITYSELECTED_KEY"


#define NSNOTIF_NEWSCHANNEL_SELECTED @"NSNOTIF_NEWSCHANNEL_SELECTED"
#define NSNOTIF_NEWSCHANNEL_SELECTED_KEY @"NSNOTIF_NEWSCHANNEL_SELECTED_KEY"


#define MYAPPLICATIONID_IN_APPSTORE @"424180337"

#define LIST_TOP_INDENT 4.0f
#define LIST_LEFT_AND_RIGHT_INDENT 8.0f
#define LIST_BOTTOM_HEIGHT 25
#define LIST_BOTTOM_WIDTH 25
#define LIST_BOTTOM_TEXT_FONT 10.0f

//颜色定义
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]

#define COLOR_CLEAR RGBACOLOR(0,0,0,0)


#define COLOR_SETTING_BGR RGBACOLOR(30,30,30,1)
#define COLOR_SETTINGBUTTON_BGR RGBACOLOR(23,23,23,1)

#define COLOR_DEEP_TEXT RGBACOLOR(88,88,88,1)

#define COLOR_NEWSLIST_TITLE RGBACOLOR(50,50,50,1)
#define COLOR_NEWSLIST_DESCRIPTION RGBACOLOR(130.0f,130.0f,130.0f,1)
#define COLOR_NEWSLIST_TITLE_WHITE RGBACOLOR(255,255,255,1)




#define COLOR_WHITE_8 RGBACOLOR(255,255,255,0.8)
#define COLOR_WHITE_9 RGBACOLOR(255,255,255,0.9)
#define COLOR_BLACK_8 RGBACOLOR(0,0,0,0.8)

#define COLOR_BLACK RGBACOLOR(51,51,51,1.0)

#define COLOR_BLACK_FOR_SHAREVIEW RGBACOLOR(0,0,0,0.8)

#define COLOR_MORE_TOPCELL RGBACOLOR(243,243,243,1.0)

#define COLOR_RED RGBACOLOR(228,0,0,1.0)
#define COLOR_TABLE_BACKGROUND RGBACOLOR(233,233,233,1.0)
#define COLOR_RED_TYPE RGBACOLOR(204,153,152,1.0)
#define COLOR_TABLE_TOP_BOOTOM RGBACOLOR(208,208,208,1.0)
#define COLOR_TABLE_BOOTOM RGBACOLOR(220,220,220,1.0)
#define COLOR_NEWSLIST_CHANNEL_TITLE RGBACOLOR(204,204,204,1)
#define COLOR_FLOAT_BACKGROUND RGBACOLOR(60,60,60,0.4)//
#define COLOR_SECTION_BACKGROUND RGBACOLOR(200,200,200,1.0)//


//tableViewCell top left right indent
#define TODAYNEWSLIST_TABLEVIEWCELL_TOP_INDENT 4.0f
#define TODAYNEWSLIST_TABLEVIEWCELL_LEFT_INDENT 8.0f
#define TODAYNEWSLIST_TABLEVIEWCELL_RIGHT_INDENT 6.0f


//today news list cell
#define TODAYNEWSLIST_CELL_HEIGHT 90
#define TODAYNEWSLIST_CELL_WITHEIMAGE_HEIGHT 115
#define TODAYNEWSLIST_CELL_WITHOUT_HEIGHT 90
#define TODAYNEWSLIST_CELL_TITLE_HEIGHT 18
#define TODAYNEWSLIST_CELL_DESCRIPTION_HEIGHT 48
#define TODAYNEWSLIST_CELL_IMAGES_HEIGHT 72
#define TODAYNEWSLIST_CELL_TAB_HEIGHT 24

#define TODAYNEWSLIST_IMAGESIZE_WIDTH 80
#define TODAYNEWSLIST_IMAGESIZE_HEIGHT 60

#define TIMERVIEW_WIDTH 42
#define TIMERVIEW_HEIGHT 33


//today news top cell
#define TODAYNEWSLIST_TOP_IMAGESIZE_WIDTH 320
#define TODAYNEWSLIST_TOP_IMAGESIZE_HEIGHT 180
#define TODAYNEWSLIST_TOP_CELL_HEIGHT 160
#define TODAYNEWSLIST_TOP_TITLE_HEIGHT 35
#define TODAYNEWSLIST_TOP_BOTTOM_HEIGHT 30

//today news list text font
#define TODAYNEWSLIST_TOP_TITLE_FONT 20.0f
#define TODAYNEWSLIST_TITLE_FONT 16.0f
#define TODAYNEWSLIST_DESCRIPTION_FONT 12.0f

//perfere news channel list cell 
#define PERFERENCESINTTING_CHANNEL_CELL_HEIGHT 90
#define PERFERENCESINTTING_CHANNEL_HEIGHT 84
#define PERFERENCESINTTING_CHANNEL_ICON_IMAGE_HEIGHT 68
//perferneceSetting top list
#define PERFERENCESINTTING_LIST_TOP_HEIGHT 160
#define PERFERENCESINTTING_LIST_TOP_WIDTH 320

//weather view
#define WEATHER_TOP_CELL_HEIGHT 140
#define WEATHER_ICON_IMAGE_HEIGHT 28
#define WEATHER_ICON_IMAGE_WIDTH 28

//routine news list
#define ROUTINE_NEWS_LIST_TOP_HEIGHT 160
#define ROUTINE_NEWS_LIST_TOP_TIME_BUTTON 20
#define ROUTINE_NEWS_LIST_TOP_TITLE_HEIGHT 35
#define ROUTINE_NEWS_LIST_TOP_BOTTOM_HEIGHT 30

#define ROUTINE_NEWS_LIST_HEIGHT 90
#define ROUTINE_NEWS_LIST_WITHEIMAGE_HEIGHT 90



//more list
#define MORE_LIST_TOP_CELL_HEIGHT 110

#define MORE_LIST_PEOPLEAPP_CELL_HEIGHT 180
#define MORE_LIST_PEOPLEAPP_ICON_HEIGHT 52
#define MORE_LIST_PEOPLEAPP_CELL_INDENT 21
//
#define MORE_LIST_RECOMMEND_CELL_HEIGHT 100
#define MORE_LIST_RECOMMEND_CELL_INDENT 20
#define MORE_LIST_RECOMMEND_ICON_HEIGHT 55


//comment cell
#define COMMENT_LIEST_CELL_HEIGHT 70


//新闻列表类别
#define SHIKE_NEWS_LIST_KIND @"SHIKE_NEWS_LISTKIND"
#define PUTONG_NEWS_LIST_KIND @"PUTONG_NEWS_LIST_KIND"
#define DIFANG_NEWS_LIST_KIND @"DIFANG_NEWS_LIST_KIND"
#define SETTING_NEWS_LIST_KIND @"SETTING_NEWS_LIST_KIND"



//正文字体
//#define SETTING_PUSH_KEY @"SETTING_PUSH_KEY"
#define SETTING_FONT_KEY @"SETTING_FONT_KEY"
#define SETTING_FONT_DEFAULT @"font_normal"
#define SETTING_FONT_LARGE @"font_large"
#define SETTING_FONT_SMALL @"font_small"
#define SETTING_FONT_KEY_NOT_PINCH @"fontSizeMode"


//登陆账号类别
#define LOGIN_USER_KIND_PEOPLE_BLOG @"People_Blog"

//ganzf***********************************************************end



//Qin,Zhuoran*********************************************************
//应用更新
#define SETTING_UPDATA_KEY @"SETTING_UPDATA_KEY"
#define APP_CHACK_UPDATE_URL @"http://mobile.app.people.com.cn/xianshi_people_wapnews/rmwapp_version.php?v=rmw"

#define SETTING_VERSION @"2.0.0"

#define APP_TITLE @"人民新闻"


//Qin,Zhuoran***************************************************************





