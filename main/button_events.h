#ifndef BUTTON_EVENTS_H_
#define BUTTON_EVENTS_H_

typedef enum {
    BTN_EXIT_MESSAGE_SCREEN,

    BTN_YES,
    BTN_NO,

    BTN_CAMERA_CLICK,
    BTN_CAMERA_EXIT,

    BTN_TX_SCREEN_NEXT,
    BTN_TX_SCREEN_PREV,
    BTN_TX_SCREEN_EXIT,

    BTN_CANCEL_SIGNATURE,
    BTN_ACCEPT_SIGNATURE,

    BTN_CANCEL_ADDRESS,
    BTN_ACCEPT_ADDRESS,

    BTN_CANCEL_OTA,
    BTN_ACCEPT_OTA,

    BTN_BLE_CONFIRM,
    BTN_BLE_DENY,

    BTN_NEW_MNEMONIC,
    BTN_NEW_MNEMONIC_ADVANCED,

    BTN_NEW_MNEMONIC_12_BEGIN,
    BTN_NEW_MNEMONIC_24_BEGIN,

    BTN_MNEMONIC_PREV,
    BTN_MNEMONIC_NEXT,
    BTN_MNEMONIC_EXIT,
    BTN_MNEMONIC_VERIFY,

    BTN_RECOVER_MNEMONIC,
    BTN_RECOVER_MNEMONIC_ADVANCED,

    BTN_RECOVER_MNEMONIC_12_BEGIN,
    BTN_RECOVER_MNEMONIC_24_BEGIN,
    BTN_RECOVER_MNEMONIC_QR_BEGIN,

    BTN_MNEMONIC_FINAL_WORD_EXISTING,
    BTN_MNEMONIC_FINAL_WORD_CALCULATE,

    BTN_QR_EXPORT_BEGIN,
    BTN_QR_EXPORT_DONE,

    BTN_USE_PASSPHRASE_ONCE,
    BTN_USE_PASSPHRASE_ALWAYS,
    BTN_USE_PASSPHRASE_NO,

    BTN_PASSPHRASE_TOGGLE_FREQUENCY,
    BTN_PASSPHRASE_TOGGLE_METHOD,
    BTN_PASSPHRASE_OPTIONS_HELP,
    BTN_PASSPHRASE_OPTIONS_EXIT,

    BTN_BIP85_12_WORDS,
    BTN_BIP85_24_WORDS,
    BTN_BIP85_EXIT,

    BTN_INITIALIZE,
    BTN_SESSION,
    BTN_SETTINGS,
    BTN_SCAN_QR,
    BTN_INFO,

    BTN_SESSION_LOGOUT,
    BTN_SESSION_SLEEP,
    BTN_SESSION_EXIT,

    BTN_CONNECT_TO_BACK,

    BTN_CONNECT_VIA_USB,
    BTN_CONNECT_VIA_BLE,
    BTN_CONNECT_VIA_QR,

    BTN_CONNECT_BACK,
    BTN_CONNECT_HELP,
    BTN_CONNECT_QR_PIN,
    BTN_CONNECT_QR_SCAN,

    BTN_QR_MODE,
    BTN_CONNECT,

    BTN_SETTINGS_TOGGLE_ORIENTATION,
    BTN_SETTINGS_TIMEOUT_0,
    BTN_SETTINGS_TIMEOUT_1,
    BTN_SETTINGS_TIMEOUT_2,
    BTN_SETTINGS_TIMEOUT_3,
    BTN_SETTINGS_TIMEOUT_4,
    BTN_SETTINGS_TIMEOUT_5,
    BTN_SETTINGS_DEVICE,
    BTN_SETTINGS_DEVICE_EXIT,
    BTN_SETTINGS_WALLET,
    BTN_SETTINGS_WALLET_EXIT,
    BTN_SETTINGS_XPUB_EXPORT,
    BTN_SETTINGS_QR_PINSERVER,
    BTN_SETTINGS_TEMPORARY_WALLET_LOGIN,
    BTN_SETTINGS_PINSERVER,
    BTN_SETTINGS_PINSERVER_SHOW,
    BTN_SETTINGS_PINSERVER_SCAN_QR,
    BTN_SETTINGS_PINSERVER_RESET,
    BTN_SETTINGS_PINSERVER_EXIT,
    BTN_SETTINGS_LEGAL,
    BTN_SETTINGS_IDLE_TIMEOUT,
    BTN_SETTINGS_ADVANCED,
    BTN_SETTINGS_ADVANCED_EXIT,
    BTN_SETTINGS_MULTISIG,
    BTN_SETTINGS_WALLET_ERASE_PIN,
    BTN_SETTINGS_PASSPHRASE,
    BTN_SETTINGS_BIP85,
    BTN_SETTINGS_OTP,
    BTN_SETTINGS_OTP_VIEW,
    BTN_SETTINGS_OTP_NEW_QR,
    BTN_SETTINGS_OTP_NEW_KB,
    BTN_SETTINGS_OTP_EXIT,
    BTN_SETTINGS_BLE,
    BTN_SETTINGS_RESET,
    BTN_SETTINGS_EXIT,

    BTN_WALLET_ERASE_PIN_SET,
    BTN_WALLET_ERASE_PIN_DISABLE,
    BTN_WALLET_ERASE_PIN_EXIT,

    BTN_BLE_TOGGLE_ENABLE,
    BTN_BLE_RESET_PAIRING,
    BTN_BLE_EXIT,

    BTN_INFO_LEGAL,
    BTN_INFO_STORAGE,
    BTN_INFO_EXIT,

    BTN_LEGAL_NEXT,
    BTN_LEGAL_PREV,

    BTN_PINSERVER_DETAILS_CONFIRM,
    BTN_PINSERVER_DETAILS_DENY,

    BTN_MULTISIG_PREV,
    BTN_MULTISIG_NEXT,
    BTN_MULTISIG_CONFIRM,
    BTN_MULTISIG_DELETE,
    BTN_MULTISIG_EXIT,

    BTN_OTP_NEXT,
    BTN_OTP_CONFIRM,
    BTN_OTP_GENERATE,
    BTN_OTP_DELETE,
    BTN_OTP_EXIT,

    BTN_EXIT_QR_HELP,

    BTN_XPUB_OPTIONS,
    BTN_XPUB_TOGGLE_SCRIPT,
    BTN_XPUB_TOGGLE_MULTISIG,
    BTN_XPUB_TOGGLE_BCUR_TYPE,
    BTN_XPUB_OPTIONS_HELP,
    BTN_XPUB_OPTIONS_EXIT,
    BTN_XPUB_EXIT,

    BTN_SCAN_ADDRESS_SKIP_ADDRESSES,
    BTN_SCAN_ADDRESS_EXIT,

    BTN_QR_OPTIONS,
    BTN_QR_TOGGLE_DENSITY,
    BTN_QR_TOGGLE_SPEED,
    BTN_QR_OPTIONS_HELP,
    BTN_QR_OPTIONS_EXIT,
    BTN_QR_DISPLAY_EXIT,

    // NOTE: Always leave these ones last as keyboard buttons use
    // BTN_KEYBOARD_ASCII_OFFSET + <ascii-value>
    BTN_KEYBOARD_BACKSPACE,
    BTN_KEYBOARD_ENTER,
    BTN_KEYBOARD_SHIFT,
    BTN_KEYBOARD_ASCII_OFFSET

} button_event_id;

#endif /* BUTTON_EVENTS_H_ */
