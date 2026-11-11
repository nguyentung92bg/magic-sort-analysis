/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPlayButton$$OnUnlockedDayPlayButtonClick
void Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__OnUnlockedDayPlayButtonClick (Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPlayButton$$OnUnlockedDayPlayButtonClick
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__OnUnlockedDayPlayButtonClick
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__OnUnlockedDayPlayButtonClick_3e20738
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000005c38103 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789328);
                    /* catch() { ... } // from try @ 03f206d0 with catch @ 03f2075c
                       try { // try from 03f2075c to 04020787 has its CatchHandler @ 03f20348 */
    FUN_012d0dc8(PTR_DAT_05791a10);
                    /* catch() { ... } // from try @ 03f20428 with catch @ 03f2076c
                       catch() { ... } // from try @ 03f20670 with catch @ 03f2076c */
    FUN_012d0dc8(PTR_DAT_057f4dd8);
    FUN_012d0dc8(PTR_DAT_05814830);
                    /* try { // try from 03f20788 to 0402078b has its CatchHandler @ 03f2080c */
    FUN_012d0dc8(PTR_DAT_057df770);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c38103 = 1;
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x60),0), lVar4 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
    puVar1 = PTR_DAT_057b8520;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar5 = Modules_Contexts_Application_ServerCommunication_Scripts_RemoteTimeService__IsRemoteDaySameWithLocalDay_3e208a8
                        ();
      puVar2 = PTR_DAT_057df770;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        if (lVar4 != 0) {
          lVar7 = *(long *)(lVar4 + 0x20);
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
            ;
          }
          lVar7 = *(long *)(lVar4 + 0x10);
          if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),lVar4,0,*(undefined8 *)(lVar7 + 0x28));
            return;
          }
          return;
        }
      }
      else {
                    /* try { // try from 03f207d8 to 0402080b has its CatchHandler @ 03f208c0 */
        if (*(long *)(param_1 + 0x68) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x38) = *(undefined8 *)(param_1 + 0x78);
          puVar2 = PTR_DAT_05814830;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          puVar3 = PTR_DAT_057f4dd8;
          puVar2 = PTR_DAT_05791a10;
          puVar1 = PTR_DAT_05789328;
          if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 03f20788 with catch @ 03f2080c
                       try { // try from 03f2080c to 04020837 has its CatchHandler @ 03f20348 */
                    /* catch() { ... } // from try @ 03f203dc with catch @ 03f2081c
                       catch() { ... } // from try @ 03f2066c with catch @ 03f2081c */
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 03f20838 to 0402084f has its CatchHandler @ 03f208b0 */
              thunk_FUN_0130472c();
            }
            uVar6 = Modules_Infrastructure_Common_Scripts_CommandNS_CommandPool__GetCommand_object__27202f8
                              (*(undefined8 *)puVar2);
                    /* try { // try from 03f20850 to 0402089f has its CatchHandler @ 03f20348 */
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            puVar1 = PTR_DAT_05789328;
            if ((bRam0000000005c3aa9b & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_05789328,0);
              FUN_012d0dc8(PTR_DAT_057d7510);
              bRam0000000005c3aa9b = 1;
            }
            lVar4 = *(long *)puVar1;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar4 = *(long *)puVar1;
            }
            if (**(long **)(lVar4 + 0xb8) != 0) {
              System_Collections_Generic_Queue_object___Enqueue_3368ec8
                        (**(long **)(lVar4 + 0xb8),uVar6,*(undefined8 *)PTR_DAT_057d7510);
              if (*(char *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) != '\0') {
                return;
              }
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              puVar1 = PTR_DAT_057c1ea0;
              if ((bRam0000000005c3aa9c & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057c1ea0);
                bRam0000000005c3aa9c = 1;
              }
              uStack_30 = 0;
              uStack_48 = 0;
              uStack_50 = 0;
              uStack_38 = 0;
              uStack_40 = 0;
              uStack_58 = 0;
              uStack_60 = 0;
              System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_a0,0);
              uStack_78 = uStack_98;
              uStack_80 = uStack_a0;
              uStack_68 = uStack_88;
              uStack_70 = uStack_90;
              uStack_50 = uStack_98;
              uStack_58 = uStack_a0;
              uStack_40 = uStack_88;
              uStack_48 = uStack_90;
              FUN_012d0d74((ulong)&uStack_60 | 8,0);
              uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
              System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_CommandExecutor__ExecuteNextCommand_d__3__216c1d4
                        ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

