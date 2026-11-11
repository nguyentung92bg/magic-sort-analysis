/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$Dispose
void Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__Dispose (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$Dispose
   void Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__Dispose
   (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__Dispose_29857e0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  if ((bRam0000000005c2d791 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c1488);
    FUN_012d0dc8(PTR_DAT_057ad868);
    FUN_012d0dc8(PTR_DAT_0575f210);
    FUN_012d0dc8(PTR_DAT_05780dd8);
    FUN_012d0dc8(PTR_DAT_057aff58);
    bRam0000000005c2d791 = 1;
  }
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  uStack_50 = 0;
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
                    /* try { // try from 02a85858 to 02b8587f has its CatchHandler @ 02a859d4 */
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar5,0,0);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_012d0d74((long *)(param_1 + 0x38),0);
  puVar3 = PTR_DAT_057c1488;
  puVar2 = PTR_DAT_057ad868;
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 02a85898 to 02b858fb has its CatchHandler @ 02a859d8 */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_68,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_057aff58);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    plStack_40 = plStack_58;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_50,*(undefined8 *)puVar2), plVar4 = plStack_40,
          (uVar6 & 1) != 0) {
      if (plStack_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar5 = UnityEngine_Component__get_transform_408b444(plStack_40,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_Transform__SetParent_409352c(lVar5,0,0);
      lVar5 = *plVar4;
      (**(code **)(lVar5 + 0x1b8))(plVar4,*(undefined8 *)(lVar5 + 0x1c0));
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_50,*(undefined8 *)puVar3);
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
                    /* try { // try from 02a85928 to 02b85937 has its CatchHandler @ 02a859d0 */
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
                    /* try { // try from 02a85938 to 02b859bf has its CatchHandler @ 02a8573c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

