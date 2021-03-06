/*-------------------------------------------------------------------------
 * This source code is confidential proprietary information which is
 * Copyright (c) 2017 by Great Hill Corporation.
 * All Rights Reserved
 *
 * The LICENSE at the root of this repo details your rights (if any)
 *------------------------------------------------------------------------*/
/*
 * This code was generated automatically from grabABI and makeClass. You may
 * edit the file, but keep your edits inside the 'EXISTING_CODE' tags.
 */
#include "tokenlib.h"
#include "walletlib.h"

//-----------------------------------------------------------------------
void walletlib_init(void) {
    QConfirmationEvent::registerClass();
    QConfirmationNeededEvent::registerClass();
    QDepositEvent::registerClass();
    QMultiTransactEvent::registerClass();
    QOwnerAddedEvent::registerClass();
    QOwnerChangedEvent::registerClass();
    QOwnerRemovedEvent::registerClass();
    QRequirementChangedEvent::registerClass();
    QRevokeEvent::registerClass();
    QSingleTransactEvent::registerClass();
    QAddOwner::registerClass();
    QChangeOwner::registerClass();
    QChangeRequirement::registerClass();
    QConfirm::registerClass();
    QExecute::registerClass();
    QIsOwner::registerClass();
    QKill::registerClass();
    QRemoveOwner::registerClass();
    QResetSpentToday::registerClass();
    QRevoke::registerClass();
    QSetDailyLimit::registerClass();
}

//-----------------------------------------------------------------------
const string_q func_addOwner_qb = "0x7065cb48";
const string_q func_changeOwner_qb = "0xf00d4b5d";
const string_q func_changeRequirement_qb = "0xba51a6df";
const string_q func_confirm_qb = "0x797af627";
const string_q func_execute_qb = "0xb61d27f6";
const string_q func_hasConfirmed_qb = "0xc2cf7326";
const string_q func_isOwner_qb = "0x2f54bf6e";
const string_q func_kill_qb = "0xcbf0b0c0";
const string_q func_mdailyLimit_qb = "0x893ec080";
const string_q func_mnumOwners_qb = "0x4c68cda4";
const string_q func_mrequired_qb = "0x6f88eef4";
const string_q func_removeOwner_qb = "0x173825d9";
const string_q func_resetSpentToday_qb = "0x5c52c2f5";
const string_q func_revoke_qb = "0xb75c7dc6";
const string_q func_setDailyLimit_qb = "0xb20d30a9";

//-----------------------------------------------------------------------
const CTransaction *promoteToWallet(const CTransaction *p) {
    if (p && (p->input.length() >= 10 || p->input == "0x")) {
        string_q items[256];
        size_t nItems = 0;

        string_q encoding = extract(p->input, 0, 10);
        string_q params   = extract(p->input, 10);
        // EXISTING_CODE
        // EXISTING_CODE

        if (encoding == func_addOwner_qb) {
            // function addOwner(address _owner)
            // 0x7065cb48
            QAddOwner *a = new QAddOwner;
            a->CTransaction::operator=(*p);
            a->_owner = str_2_Addr(extract(params, 0*64, 64));
            items[nItems++] = "address";
            a->function = toFunction("addOwner", params, nItems, items);
            return a;

        } else if (encoding == func_changeOwner_qb) {
            // function changeOwner(address _from, address _to)
            // 0xf00d4b5d
            QChangeOwner *a = new QChangeOwner;
            a->CTransaction::operator=(*p);
            a->_from = str_2_Addr(extract(params, 0*64, 64));
            a->_to = str_2_Addr(extract(params, 1*64, 64));
            items[nItems++] = "address";
            items[nItems++] = "address";
            a->function = toFunction("changeOwner", params, nItems, items);
            return a;

        } else if (encoding == func_changeRequirement_qb) {
            // function changeRequirement(uint256 _newRequired)
            // 0xba51a6df
            QChangeRequirement *a = new QChangeRequirement;
            a->CTransaction::operator=(*p);
            a->_newRequired = str_2_Wei("0x" + extract(params, 0*64, 64));
            items[nItems++] = "uint256";
            a->function = toFunction("changeRequirement", params, nItems, items);
            return a;

        } else if (encoding == func_confirm_qb) {
            // function confirm(bytes32 _h)
            // 0x797af627
            QConfirm *a = new QConfirm;
            a->CTransaction::operator=(*p);
            a->_h = extract(params, 0*64, 64);
            items[nItems++] = "bytes32";
            a->function = toFunction("confirm", params, nItems, items);
            return a;

        } else if (encoding == func_execute_qb) {
            // function execute(address _to, uint256 _value, bytes _data)
            // 0xb61d27f6
            QExecute *a = new QExecute;
            a->CTransaction::operator=(*p);
            a->_to = str_2_Addr(extract(params, 0*64, 64));
            a->_value = str_2_Wei("0x" + extract(params, 1*64, 64));
            a->_data = extract(params, 2*64);
            items[nItems++] = "address";
            items[nItems++] = "uint256";
            items[nItems++] = "bytes";
            a->function = toFunction("execute", params, nItems, items);
            return a;

        } else if (encoding == func_isOwner_qb) {
            // function isOwner(address _addr)
            // 0x2f54bf6e
            QIsOwner *a = new QIsOwner;
            a->CTransaction::operator=(*p);
            a->_addr = str_2_Addr(extract(params, 0*64, 64));
            items[nItems++] = "address";
            a->function = toFunction("isOwner", params, nItems, items);
            return a;

        } else if (encoding == func_kill_qb) {
            // function kill(address _to)
            // 0xcbf0b0c0
            QKill *a = new QKill;
            a->CTransaction::operator=(*p);
            a->_to = str_2_Addr(extract(params, 0*64, 64));
            items[nItems++] = "address";
            a->function = toFunction("kill", params, nItems, items);
            return a;

        } else if (encoding == func_removeOwner_qb) {
            // function removeOwner(address _owner)
            // 0x173825d9
            QRemoveOwner *a = new QRemoveOwner;
            a->CTransaction::operator=(*p);
            a->_owner = str_2_Addr(extract(params, 0*64, 64));
            items[nItems++] = "address";
            a->function = toFunction("removeOwner", params, nItems, items);
            return a;

        } else if (encoding == func_resetSpentToday_qb) {
            // function resetSpentToday()
            // 0x5c52c2f5
            QResetSpentToday *a = new QResetSpentToday;
            a->CTransaction::operator=(*p);
            a->function = toFunction("resetSpentToday", params, nItems, items);
            return a;

        } else if (encoding == func_revoke_qb) {
            // function revoke(bytes32 _operation)
            // 0xb75c7dc6
            QRevoke *a = new QRevoke;
            a->CTransaction::operator=(*p);
            a->_operation = extract(params, 0*64, 64);
            items[nItems++] = "bytes32";
            a->function = toFunction("revoke", params, nItems, items);
            return a;

        } else if (encoding == func_setDailyLimit_qb) {
            // function setDailyLimit(uint256 _newLimit)
            // 0xb20d30a9
            QSetDailyLimit *a = new QSetDailyLimit;
            a->CTransaction::operator=(*p);
            a->_newLimit = str_2_Wei("0x" + extract(params, 0*64, 64));
            items[nItems++] = "uint256";
            a->function = toFunction("setDailyLimit", params, nItems, items);
            return a;

        }
        // falls through
    }

    // EXISTING_CODE
    // EXISTING_CODE

    // returns NULL if not promoted
    return NULL;
}

//-----------------------------------------------------------------------
const string_q evt_Confirmation_qb = "0xe1c52dc63b719ade82e8bea94cc41a0d5d28e4aaf536adb5e9cccc9ff8c1aeda";
const string_q evt_ConfirmationNeeded_qb = "0x1733cbb53659d713b79580f79f3f9ff215f78a7c7aa45890f3b89fc5cddfbf32";
const string_q evt_Deposit_qb = "0xe1fffcc4923d04b559f4d29a8bfc6cda04eb5b0d3c460751c2402c5c5cc9109c";
const string_q evt_MultiTransact_qb = "0xe7c957c06e9a662c1a6c77366179f5b702b97651dc28eee7d5bf1dff6e40bb4a";
const string_q evt_OwnerAdded_qb = "0x994a936646fe87ffe4f1e469d3d6aa417d6b855598397f323de5b449f765f0c3";
const string_q evt_OwnerChanged_qb = "0xb532073b38c83145e3e5135377a08bf9aab55bc0fd7c1179cd4fb995d2a5159c";
const string_q evt_OwnerRemoved_qb = "0x58619076adf5bb0943d100ef88d52d7c3fd691b19d3a9071b555b651fbf418da";
const string_q evt_RequirementChanged_qb = "0xacbdb084c721332ac59f9b8e392196c9eb0e4932862da8eb9beaf0dad4f550da";
const string_q evt_Revoke_qb = "0xc7fb647e59b18047309aa15aad418e5d7ca96d173ad704f1031a2c3d7591734b";
const string_q evt_SingleTransact_qb = "0x92ca3a80853e6663fa31fa10b99225f18d4902939b4c53a9caae9043f6efd004";

//-----------------------------------------------------------------------
const CLogEntry *promoteToWalletEvent(const CLogEntry *p) {
    if (!p)
        return NULL;

    size_t nTops = p->topics.size();
    if (nTops > 0) {  // the '0'th topic is the event signature
        string_q data = extract(p->data, 2);
        // EXISTING_CODE
        // EXISTING_CODE

        if (topic_2_Str(p->topics[0]) % evt_Confirmation_qb) {
            // event Confirmation(address owner, bytes32 operation)
            // 0xe1c52dc63b719ade82e8bea94cc41a0d5d28e4aaf536adb5e9cccc9ff8c1aeda
            QConfirmationEvent *a = new QConfirmationEvent;
            a->CLogEntry::operator=(*p);
            a->owner = str_2_Addr(extract(data, 0*64, 64));
            a->operation = "0x" + extract(data, 1*64, 64);
            return a;

        } else if (topic_2_Str(p->topics[0]) % evt_ConfirmationNeeded_qb) {
            // event ConfirmationNeeded(bytes32 operation, address initiator, uint256 value, address to, bytes data)
            // 0x1733cbb53659d713b79580f79f3f9ff215f78a7c7aa45890f3b89fc5cddfbf32
            QConfirmationNeededEvent *a = new QConfirmationNeededEvent;
            a->CLogEntry::operator=(*p);
            a->operation = "0x" + extract(data, 0*64, 64);
            a->initiator = str_2_Addr(extract(data, 1*64, 64));
            a->value = str_2_Wei("0x" + extract(data, 2*64, 64));
            a->to = str_2_Addr(extract(data, 3*64, 64));
            a->data = "0x" + extract(data, 4*64);
            return a;

        } else if (topic_2_Str(p->topics[0]) % evt_Deposit_qb) {
            // event Deposit(address from, uint256 value)
            // 0xe1fffcc4923d04b559f4d29a8bfc6cda04eb5b0d3c460751c2402c5c5cc9109c
            QDepositEvent *a = new QDepositEvent;
            a->CLogEntry::operator=(*p);
            a->from = str_2_Addr(extract(data, 0*64, 64));
            a->value = str_2_Wei("0x" + extract(data, 1*64, 64));
            return a;

        } else if (topic_2_Str(p->topics[0]) % evt_MultiTransact_qb) {
            // event MultiTransact(address owner, bytes32 operation, uint256 value, address to, bytes data)
            // 0xe7c957c06e9a662c1a6c77366179f5b702b97651dc28eee7d5bf1dff6e40bb4a
            QMultiTransactEvent *a = new QMultiTransactEvent;
            a->CLogEntry::operator=(*p);
            a->owner = str_2_Addr(extract(data, 0*64, 64));
            a->operation = "0x" + extract(data, 1*64, 64);
            a->value = str_2_Wei("0x" + extract(data, 2*64, 64));
            a->to = str_2_Addr(extract(data, 3*64, 64));
            a->data = "0x" + extract(data, 4*64);
            return a;

        } else if (topic_2_Str(p->topics[0]) % evt_OwnerAdded_qb) {
            // event OwnerAdded(address newOwner)
            // 0x994a936646fe87ffe4f1e469d3d6aa417d6b855598397f323de5b449f765f0c3
            QOwnerAddedEvent *a = new QOwnerAddedEvent;
            a->CLogEntry::operator=(*p);
            a->newOwner = str_2_Addr(extract(data, 0*64, 64));
            return a;

        } else if (topic_2_Str(p->topics[0]) % evt_OwnerChanged_qb) {
            // event OwnerChanged(address oldOwner, address newOwner)
            // 0xb532073b38c83145e3e5135377a08bf9aab55bc0fd7c1179cd4fb995d2a5159c
            QOwnerChangedEvent *a = new QOwnerChangedEvent;
            a->CLogEntry::operator=(*p);
            a->oldOwner = str_2_Addr(extract(data, 0*64, 64));
            a->newOwner = str_2_Addr(extract(data, 1*64, 64));
            return a;

        } else if (topic_2_Str(p->topics[0]) % evt_OwnerRemoved_qb) {
            // event OwnerRemoved(address oldOwner)
            // 0x58619076adf5bb0943d100ef88d52d7c3fd691b19d3a9071b555b651fbf418da
            QOwnerRemovedEvent *a = new QOwnerRemovedEvent;
            a->CLogEntry::operator=(*p);
            a->oldOwner = str_2_Addr(extract(data, 0*64, 64));
            return a;

        } else if (topic_2_Str(p->topics[0]) % evt_RequirementChanged_qb) {
            // event RequirementChanged(uint256 newRequirement)
            // 0xacbdb084c721332ac59f9b8e392196c9eb0e4932862da8eb9beaf0dad4f550da
            QRequirementChangedEvent *a = new QRequirementChangedEvent;
            a->CLogEntry::operator=(*p);
            a->newRequirement = str_2_Wei("0x" + extract(data, 0*64, 64));
            return a;

        } else if (topic_2_Str(p->topics[0]) % evt_Revoke_qb) {
            // event Revoke(address owner, bytes32 operation)
            // 0xc7fb647e59b18047309aa15aad418e5d7ca96d173ad704f1031a2c3d7591734b
            QRevokeEvent *a = new QRevokeEvent;
            a->CLogEntry::operator=(*p);
            a->owner = str_2_Addr(extract(data, 0*64, 64));
            a->operation = "0x" + extract(data, 1*64, 64);
            return a;

        } else if (topic_2_Str(p->topics[0]) % evt_SingleTransact_qb) {
            // event SingleTransact(address owner, uint256 value, address to, bytes data)
            // 0x92ca3a80853e6663fa31fa10b99225f18d4902939b4c53a9caae9043f6efd004
            QSingleTransactEvent *a = new QSingleTransactEvent;
            a->CLogEntry::operator=(*p);
            a->owner = str_2_Addr(extract(data, 0*64, 64));
            a->value = str_2_Wei("0x" + extract(data, 1*64, 64));
            a->to = str_2_Addr(extract(data, 2*64, 64));
            a->data = "0x" + extract(data, 3*64);
            return a;

        }
        // fall through
    }

    // EXISTING_CODE
    // EXISTING_CODE

    // returns NULL if not promoted
    return NULL;
}

/*
 ABI for addr : 0xWalletLib
[{"constant":false,"inputs":[{"name":"_owner","type":"address"}],"name":"removeOwner","outputs":[],"type":"function"},{"constant":false,"inputs":[{"name":"_addr","type":"address"}],"name":"isOwner","outputs":[{"name":"","type":"bool"}],"type":"function"},{"constant":true,"inputs":[],"name":"m_numOwners","outputs":[{"name":"","type":"uint256"}],"type":"function"},{"constant":false,"inputs":[],"name":"resetSpentToday","outputs":[],"type":"function"},{"constant":false,"inputs":[{"name":"_owner","type":"address"}],"name":"addOwner","outputs":[],"type":"function"},{"constant":true,"inputs":[],"name":"m_required","outputs":[{"name":"","type":"uint256"}],"type":"function"},{"constant":false,"inputs":[{"name":"_h","type":"bytes32"}],"name":"confirm","outputs":[{"name":"","type":"bool"}],"type":"function"},{"constant":false,"inputs":[{"name":"_newLimit","type":"uint256"}],"name":"setDailyLimit","outputs":[],"type":"function"},{"constant":false,"inputs":[{"name":"_to","type":"address"},{"name":"_value","type":"uint256"},{"name":"_data","type":"bytes"}],"name":"execute","outputs":[{"name":"_r","type":"bytes32"}],"type":"function"},{"constant":false,"inputs":[{"name":"_operation","type":"bytes32"}],"name":"revoke","outputs":[],"type":"function"},{"constant":false,"inputs":[{"name":"_newRequired","type":"uint256"}],"name":"changeRequirement","outputs":[],"type":"function"},{"constant":true,"inputs":[{"name":"_operation","type":"bytes32"},{"name":"_owner","type":"address"}],"name":"hasConfirmed","outputs":[{"name":"","type":"bool"}],"type":"function"},{"constant":false,"inputs":[{"name":"_to","type":"address"}],"name":"kill","outputs":[],"type":"function"},{"constant":false,"inputs":[{"name":"_from","type":"address"},{"name":"_to","type":"address"}],"name":"changeOwner","outputs":[],"type":"function"},{"constant":true,"inputs":[],"name":"m_dailyLimit","outputs":[{"name":"","type":"uint256"}],"type":"function"},{"inputs":[{"name":"_owners","type":"address[]"},{"name":"_required","type":"uint256"},{"name":"_daylimit","type":"uint256"}],"type":"constructor"},{"anonymous":false,"inputs":[{"indexed":false,"name":"owner","type":"address"},{"indexed":false,"name":"operation","type":"bytes32"}],"name":"Confirmation","type":"event"},{"anonymous":false,"inputs":[{"indexed":false,"name":"owner","type":"address"},{"indexed":false,"name":"operation","type":"bytes32"}],"name":"Revoke","type":"event"},{"anonymous":false,"inputs":[{"indexed":false,"name":"oldOwner","type":"address"},{"indexed":false,"name":"newOwner","type":"address"}],"name":"OwnerChanged","type":"event"},{"anonymous":false,"inputs":[{"indexed":false,"name":"newOwner","type":"address"}],"name":"OwnerAdded","type":"event"},{"anonymous":false,"inputs":[{"indexed":false,"name":"oldOwner","type":"address"}],"name":"OwnerRemoved","type":"event"},{"anonymous":false,"inputs":[{"indexed":false,"name":"newRequirement","type":"uint256"}],"name":"RequirementChanged","type":"event"},{"anonymous":false,"inputs":[{"indexed":false,"name":"from","type":"address"},{"indexed":false,"name":"value","type":"uint256"}],"name":"Deposit","type":"event"},{"anonymous":false,"inputs":[{"indexed":false,"name":"owner","type":"address"},{"indexed":false,"name":"value","type":"uint256"},{"indexed":false,"name":"to","type":"address"},{"indexed":false,"name":"data","type":"bytes"}],"name":"SingleTransact","type":"event"},{"anonymous":false,"inputs":[{"indexed":false,"name":"owner","type":"address"},{"indexed":false,"name":"operation","type":"bytes32"},{"indexed":false,"name":"value","type":"uint256"},{"indexed":false,"name":"to","type":"address"},{"indexed":false,"name":"data","type":"bytes"}],"name":"MultiTransact","type":"event"},{"anonymous":false,"inputs":[{"indexed":false,"name":"operation","type":"bytes32"},{"indexed":false,"name":"initiator","type":"address"},{"indexed":false,"name":"value","type":"uint256"},{"indexed":false,"name":"to","type":"address"},{"indexed":false,"name":"data","type":"bytes"}],"name":"ConfirmationNeeded","type":"event"}]

*/
