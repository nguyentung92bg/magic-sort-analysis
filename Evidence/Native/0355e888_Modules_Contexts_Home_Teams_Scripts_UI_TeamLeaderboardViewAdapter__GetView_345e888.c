/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$GetView
Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__GetView (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$GetView
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o*
   Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__GetView
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, int32_t index,
   const MethodInfo* method); */

long Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__GetView_345e888
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c32620 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d1730);
    bRam0000000005c32620 = 1;
  }
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_0355e960;
  uVar2 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__get_IsUserInTeam_35a31e0
                    (*(long *)(param_1 + 0x30),0);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    if (((*(long *)(param_1 + 0x30) == 0) ||
        (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar5 == 0)) ||
       (*(long *)(param_1 + 0x28) == 0)) goto LAB_0355e960;
    uVar6 = *(undefined8 *)(lVar5 + 0x30);
    lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_057d1730);
    if (lVar5 == 0) goto LAB_0355e960;
    uVar1 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lVar5 + 0x10),uVar6,0);
    uVar1 = uVar1 & 1;
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    lVar5 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x1d0));
    if ((lVar5 != 0) && (lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar5,0), lVar4 != 0)
       ) {
      UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
      return lVar5;
    }
  }
LAB_0355e960:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

