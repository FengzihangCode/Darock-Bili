//
//
//  MeowBiliApp.swift
//  MeowBili
//
//  Created by memz233 on 2024/2/10.
//
//===----------------------------------------------------------------------===//
//
// This source file is part of the MeowBili open source project
//
//  Copyright (c) 2024 Darock Studio and the MeowBili project authors
// Licensed under GNU General Public License v3
//
// See https://darock.top/LICENSE.txt for license information
//
//===----------------------------------------------------------------------===//

import Darwin
import SwiftUI
import DarockKit
import SwiftyJSON
import SDWebImage
import SDWebImagePDFCoder
import SDWebImageSVGCoder
import SDWebImageWebPCoder
#if os(watchOS)
import WatchKit
#else
import CoreHaptics
#endif

//!!!: Debug Setting, Set false Before Release
var debug = false
var debugBuild: Bool {
    #if DEBUG
    true
    #else
    false
    #endif
}

var pShowTipText = ""
var pShowTipSymbol = ""
var pIsShowingTip = false

var isShowMemoryInScreen = false

var isInOfflineMode = false

#if os(watchOS)
var isInLowBatteryMode = false
#endif

// BUVID
var globalBuvid3 = ""
var globalBuvid4 = ""

// swiftlint:disable no_c_style_comment
/*
 ::::::::::::::-:=**=========+===++++++++++*%+*%%%%#%%%%%*++#@%%%@@@%%@@@%%%%%%%*+*#****#%%@@@@@@@@@%
 ::::::::::::::::===========+===++++++++++#@*+%%%%%%%%%%@%*++#@%%@@@@%%@@%%%%%%@%*+********#%@@@@@@@%
 :::::::::::::::::-========+==+++++=++++*%@#+%%%%%#%%%%%%%@%*+#@%%%%%@%%@%%%%%%%@%++***##%@@@@@@@@%%*
 ::::::::::::::::=========+==+++====+++*%%%+#%%%%#%%%%%%%%%@%*+%@%%%%%@%%@%%%%%%%%*+**#@@@@@@@@@@@@#:
 :::::::::::::::============++=====+++#%%%#*@%%%##@%%%%%%%%%%@*+%%%%%%%@%%@%%%%%%@*+***%@@@@@@@@@@#:-
 ::::::::::::::============++=====+++#%%%%*%%%%%#%%#%%%%%%%%%%@**@%@%%%%@%%%%%%%%@#****#%%@@@@@@@@%*-
 :::::::::::::============++======++*%%#%%#%%%%#%%%#@%%%%%%%%%%@*%@%%@%%%%%%%%%%%%%%#+*#%@@@@@@@%%*=-
 ::::::::::::=-==========++===+==++*%%##%%%%%%%%%%*%%%%%%%%%%#%%%####%@%%%%%%%%%%%%@%+***#%@@@@*--::-
 :::::::::::=-===========+======+++%%%*%%%%%%%%%@*+%%%%%%%%%%%%%%%**%#%@%%%%%%%%%%%%%*+*****#%@#-----
 ::::::::::=:-==========+======+++*%%#*%%%%%%#%%*+*%%%%%%%%%%%#%%%#++%#%@%%%%%%%%%%%%*****#++*##=----
 :::::::::=::==================+++#%%*#%%%%%%%@#+*+%%%%%%%%%%%%%%%%%++%#%@%%%%%%%%%%%#@%#%@%+%@%=:---
 ::::::::--:=========+==+====+=+++%%%*%%%%%%%%***#+#%%%%%%%%%%%#%%%%%*+#%#@%%%%%%%%%%#%%@%%@*%%@*-::-
 :::::::--:-=========+========+++*%%##%%%#%@%+*%*#**%%%%%%%%%%%#%%%%%%#+#%#%%%%%%%%%%#%%%%%@##@%%#*=:
 ::::::--::=========+=-+====+====*%%#*%%#%%*+*%####+%%%%%%#%%%%##%%%%#@#+#%#%@%%%###%%%%%%%@%#@%@*-**
 ::::::-::-=========+======+*+=++*%%**#%%#++#@##%#%+*@%%%%%%%%%%#%%%%*%@%+*%#%%##%%%%%%@%%%%@#%@%%-:=
 :::::-:::==========+======##+=+++%%###*+=*%%%##%%%%+%%%%%##%%*#*%%%@#*@%%+#%%#%%%@%%%%@%%%%@%%@%##-:
 ::::-:::-==========+-==+=***#++++###*=+*#%%%%%#%@%@#+%%%%#%%%*#**%%%%+#%%%##%#%@%%%%%%@%%%@%%%%@*%#-
 ::::::::===========+----::..:::-=+###*%%%%%%%@##%@%@#*@%%#%%#%#%*#%%%+#%**+**%#%%%%%%%@%%%@%%%%%%+%%
 ::::::::=========+++=-- :==+-.::::=*@#%%%%#%%@%##@@%@##@%%%#%@#@%*%%*#***%*#%*%#%%%%%#@%%%%%%%%%%*+%
 :::::::-=========*#+==#-=@@@=-===--+#%#%%%##%@@@##@@@@%##%##%##@@%#%%+=*@@*#@#+##%@%%#%%#%%%@%%@%#++
 :::::::-========+%%+==##+%@@---=--+#*#%##%%*%@@@@%#%@@@#*+=-----======++%@*#%%#+##%%%#%%*%%%%%%%%%#=
 :::::::=========#%%#=-*%%%@@==*+-=+-*@%@##%%%@@@@@@%%@%**#-:-----::-.:--+%*%%%@#*##%%#%#*@%%%%%%%%@#
 :::::::=======++#%%%+=+#%@%@%*%%###+%@@@@%%%#%@@@@@@@@%@@%-==+*==*%@%*:.-#*%%%%%%%%%%#%+*@%%%%%%%%%%
 .-::::-========+%%%%+++#%@@@@%#%%%#%@@@@@@@@%%%@@@@@@@@@@*-==##===+@@%+*##*%%%%%%%%%%%++#%%%%%%%%%%%
 .--::--====-===+#%%%*#=*#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%+#####+-#@%%%%#+#%%%%%%%%%%%++#%%%%%%%#%%%
 .--:----========*@%%##*+*%@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@##%%%#*#@@@@%##+%%%%%%%%%%%%*+%%%%%#%@#*%%
 .-=:-=--==-=-==++%%%#**#*#%@@@@@@@@@@@@@@%%%@@@@@@@@@@@@@@@@@@@%@@@@@%#%**@%%%%%%%%%%%#+%%%%%#%%#+#%
 ::=-=--===-======+%%%%==+#%@@@@@@@@@@@@@@%%%@@@@@@@@@@@@@@@@@@@@@@@@@%##=%%%%%%%%%%%%%%*%%%%**%%*=*%
 -===-====--=====+=*%%%*=-*#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##**%%%%%%%%%%%#%%%%%%%+#%%*:+#
 -=======--:======+=*%%=+==##%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%###%%%%%%%%%%%%*#%%%%%#+%%%+:-*
 =======-:::=========*%*-==+##%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#*#*#%%%%%%%%%%%%+*%#%%%+*%%#-:-=
 ======---==-=========+%+-==+*#%@@@@@@@@@@@%%%%@@@@@@@@@@@@@@@@@@@%+-=++%%#%%%%%%%%%*+*%%#%*=#%%*-:-=
 =====--====-===========#+====++#%@@@@@@@@@%%%%@@@@@@@@@@@@@@@@@%*--+==#%#%%%%%%%%%#+++%%##%#%%*=:-==
 ===-:-====---===========+++===+++*%@@@@@@@@@@@@@@@@@@@@@@@@@%*=:::+==+%#*%%%%%%%%%+*++%%%#%%%*+--=+=
 ==-::===-:----=========+=-+-::-=+++=*%@@@@@@@@@@@@@@@@@%%#+==-==+**++%%+#%%%%%%%%#+*++%%%%#%*+-:-==+
 =-:::==-..-----=========#+-::-++=++: :*#%@@@@@@@@%%%###****#%%%%%#+=#%++%%%%%%%%%=*+++%%#%#++=:--=+%
 -::::=-:-------=========+#-::+%#*==:.:-+++*##########%%%%%%##*++=-:+%+=*%%%%%%%%*-*+++%%*#%#-::::-==
 -----=--------++=========+#--*##%#+:--:*+++**##%%%%##**+==---------%*-=#%%%%%%%#++==++%%++#%*:::::::
 --------------++++========+*=+%###%*--+*#%%%%##*++=------==+**##+=*#*+=#%%%%%%%+*+=+=*%#+++#@#=:::::
 ------:-------++++==========*+#####%#+*%##*+=-----=++*###%%%%%%#==###+=*%##%%%#+*+++=*%*+++==#%*=:::
 ----::...:---:=++++*++=:-====++*######+=----=+**##%%%%%########*=+*##*++%##%%%*+++++-%#=+++::-+**+++
 --:....::..-:::=++#%#+:::======++######+-+*#%##################*=+####++*%*%%#+++++=*#++++=+++==+###
 :.....-+=..-::.-++#*=:-+#***++-::-+***###++**###################=+#####++*##%#+++==+*++++++==+*#%###
 .....:++- -=::.:-+=::=*########*-:-*######+==++**###############*=%#####+=++%#++=++=+=+====+#%%#####
 ..:..+++..+-.:.::::-+############=::=*#####*+++++++*############%**%%#%%%#+=+%++++=====-=*#%######%%
  :+::++: -+---:::::###############*=::=*######***#*#**#***********+=***++=-::=*===+++++*########%#*+
 :+*-=+=.:---::.::::=################*=::-+*#####*=-:-:::::----------------=-::+++++++**######%#*+-::
 ++--++=-:::::.::::::=+*###############*+=--==+=-:::-+:--====================-:=+++++**+#**#%#+-:::::
 ++:+++=:.:::..:::::-*==+**###############*+=:::---+%--=======================--+++++#++++**+-:::::::
 +++++=::::..--:::::-##*++=++***##***++=+*===+*****%=-=========================-++++**++**+--------::
 
 Xcode哥😭，求你了🙏别把fatal往main抛，闭包，精确到闭包就行求你了🙏我在也不跑了哥，我真的太痒了，求你了，我听话，我以后再也不闹了🤐，求你了哥，给我定位到闭包吧，我现在身体痒的要死😫，求求你了🙏，哥，你就最后再给我一次吧我求求你了🙏哥，你要什么我都给你，你再给我一集🤌就好，我现在身体里像是有蚂蚁在爬😫，太痒了 哥，给我一集吧，最后一次，我发誓✋，真的是最后一次了
   |  main
   |
  \/
*/
// swiftlint:enable no_c_style_comment
@main
struct DarockBili_Watch_AppApp: App {
    #if os(watchOS)
    @WKApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    #else
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    #endif
    @Environment(\.scenePhase) var scenePhase
    @Environment(\.isLuminanceReduced) var isLuminanceReduced
    // Screen Time
    @AppStorage("isSleepNotificationOn") var isSleepNotificationOn = false
    @AppStorage("notifyHour") var notifyHour = 0
    @AppStorage("notifyMinute") var notifyMinute = 0
    @AppStorage("IsScreenTimeEnabled") var isScreenTimeEnabled = true
    @AppStorage("BlurWhenScreenSleep") var blurWhenScreenSleep = false
    @AppStorage("IsReduceBrightness") var isReduceBrightness = false
    @AppStorage("ReduceBrightnessPercent") var reduceBrightnessPercent = 0.1
    @State var screenTimeCaculateTimer: Timer?
    @State var showTipText = ""
    @State var showTipSymbol = ""
    @State var isShowingTip = false
    @State var isLowBatteryMode = false
    // Debug Controls
    @State var isShowingDebugControls = false
    @State var systemResourceRefreshTimer: Timer?
    @State var memoryUsage: Float = 0.0
    @State var isShowMemoryUsage = false
    @State var currentHour = 0
    @State var currentMinute = 0
    // Handoff
    @State var handoffVideoDetails = [String: String]()
    @State var shouldPushVideoView = false
    // FileLocker
    @State var fileLockerPwd = UserDefaults.standard.string(forKey: "FileLockerPassword") ?? ""
    @State var fileLockerRecoverCode = UserDefaults.standard.string(forKey: "FileLockerRecoverCode") ?? ""
    @State var fileLockerRetryCount = 0
    @State var fileLockerInput = ""
    @State var recoveryCodeInput = ""
    // Navigators
    @State var isUrlOpenVideoPresented = false
    @State var urlOpenVideoDetails = [String: String]()
    #if !os(watchOS)
    @State var shouldShowAppName = false
    #endif
    var body: some SwiftUI.Scene {
        WindowGroup {
            if fileLockerPwd != "" {
                NavigationStack {
                    List {
                        Section {
                            Text(fileLockerRetryCount == 0 ? "文件保险箱已启用" : "输入错误")
                                .font(.title3)
                                .bold()
                                .listRowBackground(Color.clear)
                        }
                        Section {
                            TextField("密码", text: $fileLockerInput) {
                                if fileLockerInput == fileLockerPwd {
                                    fileLockerPwd = ""
                                } else {
                                    fileLockerInput = ""
                                    fileLockerRetryCount++
                                }
                            }
                            .submitLabel(.continue)
                        }
                        if fileLockerRetryCount >= 3 {
                            Section {
                                TextField("使用恢复密钥", text: $recoveryCodeInput) {
                                    if recoveryCodeInput == fileLockerRecoverCode {
                                        fileLockerPwd = ""
                                    } else {
                                        recoveryCodeInput = ""
                                        fileLockerRetryCount++
                                    }
                                }
                                .submitLabel(.continue)
                            }
                        }
                    }
                }
            } else {
                ZStack {
                    #if os(watchOS)
                    ContentView()
                    VStack {
                        Spacer()
                        if isShowingTip {
                            HStack {
                                Image(systemName: showTipSymbol)
                                Text(showTipText)
                            }
                            .font(.system(size: 14, weight: .bold))
                            .frame(width: WKInterfaceDevice.current().screenBounds.width - 20, height: 50)
                            .lineLimit(1)
                            .minimumScaleFactor(0.1)
                            .background(.ultraThinMaterial, in: RoundedRectangle(cornerRadius: 14, style: .continuous))
                            .transition(
                                AnyTransition
                                    .opacity
                                    .combined(with: .scale)
                                    .animation(.bouncy(duration: 0.35))
                            )
                        }
                        Spacer()
                            .frame(height: 15)
                    }
                    .ignoresSafeArea()
                    .allowsHitTesting(false)
                    if isReduceBrightness {
                        Rectangle()
                            .fill(Color.black)
                            .ignoresSafeArea()
                            .opacity(reduceBrightnessPercent)
                            .allowsHitTesting(false)
                    }
                    #else
                    NavigationStack {
                        ZStack {
                            // Hide NavigationLinks behind
                            NavigationLink("", isActive: $isUrlOpenVideoPresented, destination: { VideoDetailView(videoDetails: urlOpenVideoDetails) })
                            ContentView()
                        }
                    }
                    .onOpenURL { url in
                        let dec = url.absoluteString.urlDecoded()
                        let spd = dec.split(separator: "/").dropFirst()
                        debugPrint(spd)
                        switch spd[1] {
                        case "withvideodetail":
                            let kvs = dec.split(separator: "/", maxSplits: 1).dropFirst()[2].split(separator: "&") // e.g.: ["BV=xxx", "Title=xxx"]
                            urlOpenVideoDetails.removeAll()
                            for kv in kvs {
                                let kav = kv.split(separator: "=")
                                urlOpenVideoDetails.updateValue(String(kav[1]), forKey: String(kav[0]))
                            }
                            isUrlOpenVideoPresented = true
                        case "openbvid":
                            let bvid = spd[2]
                            urlOpenVideoDetails = ["Pic": "", "Title": "Loading...", "BV": String(bvid), "UP": "Loading...", "View": "1", "Danmaku": "1"]
                            isUrlOpenVideoPresented = true
                        default:
                            break
                        }
                    }
                    if shouldShowAppName {
                        VStack {
                            Spacer()
                                .frame(height: 12)
                            ZStack {
                                Capsule()
                                    .fill(Color.accentColor)
                                    .frame(width: 60, height: 20)
                                HStack {
                                    Text("喵哩喵哩")
                                        .foregroundStyle(Color.white)
                                        .font(.system(size: 12, weight: .medium))
                                }
                            }
                            Spacer()
                        }
                        .ignoresSafeArea()
                    }
                    #endif
                }
                .blur(radius: isLuminanceReduced && blurWhenScreenSleep ? 12 : 0)
                .onAppear {
                    #if os(watchOS)
                    isInLowBatteryMode = UserDefaults.standard.bool(forKey: "IsInLowBatteryMode")
                    #endif
                    
                    Timer.scheduledTimer(withTimeInterval: 0.05, repeats: true) { _ in
                        showTipText = pShowTipText
                        showTipSymbol = pShowTipSymbol
                        UserDefaults.standard.set(isLowBatteryMode, forKey: "IsInLowBatteryMode")
                        Timer.scheduledTimer(withTimeInterval: 0.2, repeats: false) { _ in
                            isShowingTip = pIsShowingTip
                        }
                    }
                    
                    Timer.scheduledTimer(withTimeInterval: 1, repeats: true) { timer in
                        if isShowMemoryInScreen {
                            isShowMemoryUsage = true
                            Timer.scheduledTimer(withTimeInterval: 0.5, repeats: true) { _ in
                                memoryUsage = getMemory()
                            }
                            timer.invalidate()
                        }
                    }
                    let timer = Timer(timeInterval: 1, repeats: true) { _ in
                        currentHour = getCurrentTime().hour
                        currentMinute = getCurrentTime().minute
                    }
                    let sleepTimeCheck = Timer(timeInterval: 60, repeats: true) { _ in
                        if currentHour == notifyHour && currentMinute == notifyMinute && isSleepNotificationOn {
                            #if !os(watchOS)
                            AlertKitAPI.present(title: String(localized: "Sleep.notification"), icon: .heart, style: .iOS17AppleMusic, haptic: .warning)
                            #else
                            tipWithText(String(localized: "Sleep.notification"), symbol: "bed.double.fill")
                            #endif
                        }
                    }
                    RunLoop.current.add(timer, forMode: .default)
                    timer.fire()
                    RunLoop.current.add(sleepTimeCheck, forMode: .default)
                    sleepTimeCheck.fire()
                }
                .overlay {
                    VStack {
                        HStack {
                            if isLowBatteryMode {
                                Image(systemName: "circle")
                                    .font(.system(size: 17, weight: .heavy))
                                    .foregroundColor(.accentColor)
                                    .offset(y: 10)
                            }
                        }
                        Spacer()
                    }
                    .ignoresSafeArea()
                    if isShowMemoryUsage {
                        VStack {
                            HStack {
                                Spacer()
                                Text("Memory.indicator.\(String(format: "%.2f", memoryUsage))")
                                    .font(.system(size: 10, weight: .medium))
                                    .offset(y: 26)
                            }
                            Spacer()
                        }
                        .ignoresSafeArea()
                    }
                    if debug {
                        HStack {
                            VStack {
                                Button(action: {
                                    isShowingDebugControls.toggle()
                                }, label: {
                                    Text(isShowingDebugControls ? "Close Debug Controls" : "Show Debug Controls")
                                        .font(.system(size: 12))
                                        .foregroundColor(.blue)
                                })
                                .buttonStyle(.plain)
                                .offset(x: 15, y: 5)
                                if isShowingDebugControls {
                                    VStack {
                                        HStack {
                                            Text("Memory Usage: \(memoryUsage) MB")
                                            Spacer()
                                        }
                                        .allowsHitTesting(false)
                                    }
                                    .font(.system(size: 10))
                                    .onAppear {
                                        Timer.scheduledTimer(withTimeInterval: 1.0, repeats: true) { timer in
                                            systemResourceRefreshTimer = timer
                                            memoryUsage = getMemory()
                                        }
                                    }
                                    .onDisappear {
                                        systemResourceRefreshTimer?.invalidate()
                                    }
                                }
                                Spacer()
                            }
                            .padding(.horizontal, 3)
                            .padding(.vertical, 1)
                            Spacer()
                        }
                        .ignoresSafeArea()
                    }
                }
                .onContinueUserActivity("com.darock.DarockBili.video-play") { activity in
                    if let videoDetails = activity.userInfo as? [String: String] {
                        handoffVideoDetails = videoDetails
                        shouldPushVideoView = true
                    }
                }
                .onContinueUserActivity(NSUserActivityTypeBrowsingWeb) { activity in
                    if let url = activity.webpageURL, let bvid = url.absoluteString.split(separator: "darock.top/meowbili/video/", maxSplits: 1)[from: 1] {
                        urlOpenVideoDetails = ["Pic": "", "Title": "Loading...", "BV": String(bvid), "UP": "Loading...", "View": "1", "Danmaku": "1"]
                        isUrlOpenVideoPresented = true
                    }
                }
            }
        }
        .onChange(of: scenePhase) {
            switch scenePhase {
            case .background:
                break
            case .inactive:
                #if os(iOS)
                shouldShowAppName = false
                #endif
            case .active:
                SDImageCodersManager.shared.addCoder(SDImageWebPCoder.shared)
                SDImageCodersManager.shared.addCoder(SDImageSVGCoder.shared)
                SDImageCodersManager.shared.addCoder(SDImagePDFCoder.shared)
                SDImageCache.shared.config.shouldCacheImagesInMemory = false
                SDImageCache.shared.config.shouldUseWeakMemoryCache = true
                SDImageCache.shared.clearMemory()
                
                updateBuvid()
                
                #if os(watchOS)
                WKInterfaceDevice.current().isBatteryMonitoringEnabled = true
                #else
                InitHapticEngine()
                
                shouldShowAppName = true
                #endif
                
                if isScreenTimeEnabled {
                    if screenTimeCaculateTimer == nil {
                        Timer.scheduledTimer(withTimeInterval: 1, repeats: true) { timer in
                            screenTimeCaculateTimer = timer
                            let df = DateFormatter()
                            df.dateFormat = "yyyy-MM-dd"
                            let dateStr = df.string(from: Date.now)
                            UserDefaults.standard.set(UserDefaults.standard.integer(forKey: "ScreenTime\(dateStr)") + 1, forKey: "ScreenTime\(dateStr)")
                        }
                    }
                }
                
                UserDefaults(suiteName: "group.darockst")?.set(true, forKey: "DCIsMeowBiliInstalled")
            @unknown default:
                break
            }
        }
    }
}

public func tipWithText(_ text: String, symbol: String = "", time: Double = 3.0) {
    pShowTipText = text
    pShowTipSymbol = symbol
    pIsShowingTip = true
    Timer.scheduledTimer(withTimeInterval: time, repeats: false) { _ in
        pIsShowingTip = false
    }
}

#if !os(watchOS)
class AppDelegate: NSObject, UIApplicationDelegate {
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]? = nil) -> Bool {
        return true
    }
    
    func applicationDidReceiveMemoryWarning(_ application: UIApplication) {
        //AlertKitAPI.present(title: "低内存警告", subtitle: "喵哩喵哩收到了低内存警告", icon: .error, style: .iOS17AppleMusic, haptic: .warning)
    }
}
#else
class AppDelegate: NSObject, WKApplicationDelegate {
    func applicationDidFinishLaunching() {
        SDImageCodersManager.shared.addCoder(SDImageWebPCoder.shared)
        SDImageCodersManager.shared.addCoder(SDImageSVGCoder.shared)
        SDImageCodersManager.shared.addCoder(SDImagePDFCoder.shared)
        SDImageCache.shared.config.shouldCacheImagesInMemory = false
        SDImageCache.shared.config.shouldUseWeakMemoryCache = true
        SDImageCache.shared.clearMemory()
    }
}
#endif

public func updateBuvid() {
    DarockKit.Network.shared.requestJSON("https://api.bilibili.com/x/frontend/finger/spi") { respJson, isSuccess in
        if isSuccess {
            globalBuvid3 = respJson["data"]["b_3"].string ?? globalBuvid3
            globalBuvid4 = respJson["data"]["b_4"].string ?? globalBuvid4
        }
    }
}
