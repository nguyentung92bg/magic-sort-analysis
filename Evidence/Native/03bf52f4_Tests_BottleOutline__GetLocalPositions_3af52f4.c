/* IL2CPP: Tests.BottleOutline$$GetLocalPositions
System_Collections_Generic_List_Vector3__o* Tests_BottleOutline__GetLocalPositions (Tests_BottleOutline_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Tests.BottleOutline$$GetLocalPositions
   System_Collections_Generic_List_Vector3__o* Tests_BottleOutline__GetLocalPositions
   (Tests_BottleOutline_o* __this, const MethodInfo* method); */

long Tests_BottleOutline__GetLocalPositions_3af52f4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar2 = PTR_DAT_0577bf88;
  if ((bRam0000000005c36178 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ae688);
    FUN_012d0dc8(PTR_DAT_0575a3c0);
    FUN_012d0dc8(PTR_DAT_057e60f0);
    FUN_012d0dc8(PTR_DAT_05809010);
    FUN_012d0dc8(PTR_DAT_057651f0);
    FUN_012d0dc8(PTR_DAT_05807d20);
    FUN_012d0dc8(PTR_DAT_0577bf88);
    bRam0000000005c36178 = 1;
  }
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    System_Collections_Generic_List_Vector3____ctor_2275524(lVar5,*(undefined8 *)PTR_DAT_05807d20);
    puVar4 = PTR_DAT_05809010;
    puVar3 = PTR_DAT_057ae688;
    puVar2 = PTR_DAT_0575a3c0;
    if (*(long *)(param_4 + 0x18) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_68,*(long *)(param_4 + 0x18),*(undefined8 *)PTR_DAT_057651f0);
      uStack_48 = uStack_60;
      uStack_50 = uStack_68;
      lStack_40 = lStack_58;
      while( true ) {
        uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_50,*(undefined8 *)puVar2);
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_50,*(undefined8 *)puVar3);
          return lVar5;
        }
        if (lStack_40 == 0) break;
        uVar9 = UnityEngine_Transform__get_localPosition_4092c40(lStack_40,0);
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)puVar4;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar7 + 0x20) = uVar9;
          *(undefined4 *)(lVar7 + 0x24) = param_2;
          *(undefined4 *)(lVar7 + 0x28) = param_3;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar5);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

