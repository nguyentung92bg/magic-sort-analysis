/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$Awake
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__Awake (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$Awake
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__Awake
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__Awake_375df48
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33ba8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057ec458);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0580f080);
    FUN_012d0dc8(PTR_DAT_05766a70);
    bRam0000000005c33ba8 = 1;
  }
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) {
    plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar4,*(undefined8 *)PTR_DAT_057ec458);
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0580f080 + 300);
      if ((bVar1 <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0580f080))
      {
        if (plVar5[8] == 0) goto LAB_0385e074;
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(plVar5[8] + 0x18);
        FUN_012d0d74();
      }
    }
    lVar8 = *(long *)(param_1 + 0x48);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578b048);
    if ((lVar4 != 0) &&
       (System_Action___ctor_21239bc(lVar4,param_1,*(undefined8 *)PTR_DAT_05766a70,0), lVar8 != 0))
    {
      if ((bRam0000000005c3941f & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578b048,lVar4,0);
        bRam0000000005c3941f = 1;
      }
      puVar2 = PTR_DAT_0578b048;
      plVar5 = (long *)(lVar8 + 0x38);
      lVar8 = *plVar5;
      while ((plVar6 = (long *)System_Delegate__Combine_23e3964(lVar8,lVar4,0),
             plVar6 == (long *)0x0 || (*plVar6 == *(long *)puVar2))) {
        lVar7 = FUN_01351224(plVar5,plVar6,lVar8);
        bVar3 = lVar8 == lVar7;
        lVar8 = lVar7;
        if (bVar3) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(plVar6);
    }
  }
LAB_0385e074:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

