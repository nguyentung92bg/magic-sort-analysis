/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$PlayRevealAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayRevealAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$PlayRevealAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayRevealAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__PlayRevealAnimation_410a1c4
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000005c3abbb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c1488);
    FUN_012d0dc8(PTR_DAT_057ad868);
    FUN_012d0dc8(PTR_DAT_0575f210);
    FUN_012d0dc8(PTR_DAT_057aff58);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c3abbb = 1;
  }
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  lVar5 = *(long *)(param_1 + 0xd0);
  if ((lVar5 != 0) && (*(long *)(param_1 + 0xa8) != 0)) {
    uVar3 = Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__PlayRevealAnimation_2985e58
                      (*(long *)(param_1 + 0xa8),*(undefined4 *)(lVar5 + 0x10),
                       **(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8),1,lVar5,1,0);
    puVar2 = PTR_DAT_057c1488;
    puVar1 = PTR_DAT_057ad868;
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x30), lVar5 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_68,lVar5,*(undefined8 *)PTR_DAT_057aff58);
      uStack_48 = uStack_60;
      uStack_50 = uStack_68;
      lStack_40 = lStack_58;
      while( true ) {
        uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_50,*(undefined8 *)puVar1);
        if ((uVar4 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_50,*(undefined8 *)puVar2);
          return uVar3;
        }
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar5 = UnityEngine_Component__get_transform_408b444(lStack_40,0);
        lVar6 = *(long *)(param_1 + 0xa0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (lVar5 == 0) break;
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar6 + 0x3c),*(undefined4 *)(lVar6 + 0x40),
                   *(undefined4 *)(lVar6 + 0x44),lVar5,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

