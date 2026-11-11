/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$MoveToLocalPosition
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__MoveToLocalPosition (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, UnityEngine_Vector3_o localPosition, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$MoveToLocalPosition
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__MoveToLocalPosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this,
   UnityEngine_Vector3_o localPosition, float duration, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__MoveToLocalPosition_248eae8
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar7 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_5,0);
  puVar1 = PTR_DAT_057ea718;
  if ((bRam0000000005c2a646 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f050,0,0);
    FUN_012d0dc8(PTR_DAT_0580e4a0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05762af8);
    FUN_012d0dc8(PTR_DAT_05804420);
    FUN_012d0dc8(PTR_DAT_057a73d0);
    FUN_012d0dc8(PTR_DAT_057ea718);
    bRam0000000005c2a646 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0577f050;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    puVar8 = (undefined8 *)(lVar3 + 0x10);
    *puVar8 = uVar7;
    FUN_012d0d74(puVar8,uVar7);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0580e4a0;
    if (lVar4 != 0) {
      DG_Tweening_Core_DOGetter_Vector3____ctor_156d7c4
                (lVar4,lVar3,*(undefined8 *)PTR_DAT_05804420,0);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_057815e0;
      puVar1 = PTR_DAT_05762af8;
      if (lVar5 != 0) {
        DG_Tweening_Core_DOSetter_Vector3____ctor_156ebf4
                  (lVar5,lVar3,*(undefined8 *)PTR_DAT_057a73d0,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = DG_Tweening_DOTween__To_1ed8974(param_1,param_2,param_3,param_4,lVar4,lVar5,0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__SetOptions_1ee5154(uVar7,0,0);
        DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                  (uVar6,*puVar8,*(undefined8 *)puVar1);
        return uVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

