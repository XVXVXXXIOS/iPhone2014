//
//  ViewController.h
//  ProjectFinal
//
//  Created by xvxvxxx on 12/18/14.
//  Copyright (c) 2014 谢伟军. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NetworkManager.h"
#import <AFNetworking/AFNetworking.h>
#import "CDSideBarController.h"
#import "ChannelsTableViewController.h"
#import "LoginViewController.h"
#import "AppDelegate.h"
#import "SongInfo.h"
#import "PlayerController.h"
@interface ViewController : UIViewController <CDSideBarControllerDelegate, NetworManagerDelegate, PlayerControllerDelegate>{
    CDSideBarController *sideBar;
}
@property (strong, nonatomic) IBOutlet UILabel *songTitle;
@property (strong, nonatomic) IBOutlet UILabel *songArtist;
@property (strong, nonatomic) IBOutlet UILabel *ChannelTitle;
@property (strong, nonatomic) IBOutlet UILabel *timerLabel;
@property (strong, nonatomic) IBOutlet UIProgressView *timerProgressBar;

@property (strong, nonatomic) IBOutlet UIImageView *imageview;
@property (strong, nonatomic) IBOutlet UITextField *username;
@property (strong, nonatomic) IBOutlet UITextField *password;
@property (strong, nonatomic) IBOutlet UITextField *captcha;

@property (strong, nonatomic) IBOutlet UIImageView *picture;
@property (strong, nonatomic) IBOutlet UIImageView *pictureBlock;
@property (strong, nonatomic) IBOutlet UIButton *pauseButton;
@property (strong, nonatomic) IBOutlet UIButton *likeButton;

- (IBAction)submitButton:(UIButton *)sender;
- (IBAction)pauseButton:(UIButton *)sender;
- (IBAction)likeButton:(UIButton *)sender;
- (IBAction)deleteButton:(UIButton *)sender;
- (IBAction)skipButton:(UIButton *)sender;
-(void)loadCaptchaImage;
-(void)loadPlaylist;
@end

