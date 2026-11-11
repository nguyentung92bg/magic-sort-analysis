/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Tab$$OnTouchDown
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__OnTouchDown (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Tab$$OnTouchDown
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__OnTouchDown
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* __this, UnityEngine_Vector2_o
   position, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__OnTouchDown_2aefde0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000005c2eb9f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058164b8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057916a0);
    bRam0000000005c2eb9f = 1;
  }
  lVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
  puVar2 = PTR_DAT_058164b8;
  puVar1 = PTR_DAT_057b8520;
  lVar4 = *(long *)(param_1 + 0x28);
  if ((lVar4 != 0) && (lVar3 != 0)) {
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
               *(undefined4 *)(lVar4 + 0x28),lVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                (lVar3,1,*(undefined8 *)PTR_DAT_057916a0);
      *(undefined1 *)(param_1 + 0x40) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

